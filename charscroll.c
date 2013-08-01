#include "charscroll.h"

/*** static ***/
static uint8_t blankCols = 8;
static bool screenBlank = true;
static bool getGB = false;
static uint8_t color[3] = {2, 2, 2};
static uint8_t thisChar;

static uint8_t i = SPACE_WIDTH;

static enum state_t { SPACE, CHAR } state = SPACE;

bool scroll(struct fifo* usart, struct charTable_t* charTable,
		uint8_t red[64], uint8_t green[64], uint8_t blue[64])
{
	/*** temporary ***/
	static uint8_t temp;
	static uint8_t row;
	static const uint8_t* pixelAddr;
	static uint8_t pixel;

	shiftPixelsLeft(red, green, blue);

	switch (state) {
		case SPACE:
			while (usart->tail && (getGB || usart->tail->val <= 0x0F)) {
				if (getGB) {
					temp = dequeue(usart);
					color[1] = (temp & 0xF0) >> 4;
					color[2] = temp & 0x0F;
					getGB = false;
				} else {
					color[0] = dequeue(usart);
					getGB = true;
				};
			};

			if (i < SPACE_WIDTH || !usart->tail || getGB) {
				for (row = 0; row <= 7; row++) {
					red[8*row + 7] = 0;
					green[8*row + 7] = 0;
					blue[8*row + 7] = 0;
				};
				if (i < SPACE_WIDTH)
					++i;
				if (!screenBlank && ++blankCols == 8)
					screenBlank = true;
				break;
			} else {
				/* SPACE_WIDTH spaces have been printed && queue isn't empty
				 * && !getGB */
				thisChar = dequeue(usart);
				state = CHAR;
				i = 0;

				screenBlank = false;
				blankCols = 0;
				// fall through
			};
		case CHAR:
			for (row = 0; row <= 7; row++) {
				pixelAddr = &(charTable->pixels[thisChar]
					[charTable->width[thisChar]*row + i]);
				pixel = pgm_read_byte(pixelAddr);

				temp = 8*row + 7;
				red[temp] = pixel * color[0];
				green[temp] = pixel * color[1];
				blue[temp] = pixel * color[2];
			};
			if (++i >= charTable->width[thisChar]) {
				state = SPACE;
				i = 0;
			};
			break;
	};

	return screenBlank;
}
