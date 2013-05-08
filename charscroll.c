#include "charscroll.h"

/*** static ***/
static uint8_t space = SPACE_WIDTH;
static uint8_t spaceMode = 1;
static uint8_t charCol = 0;
static uint8_t charTableIndex;
static BOOL screenBlank = FALSE;
static uint8_t blankCols = 0;



uint8_t scroll(struct fifo* charFifo, struct charTable_t* charTable,
		uint8_t red[64], uint8_t green[64], uint8_t blue[64],
		const uint8_t mult[3])
{
	/*** temporary ***/
	static uint8_t row;
	static const uint8_t* pixelAddr;
	static uint8_t pixel;


	if (spaceMode) { // we're in space (mode)
		if (space == SPACE_WIDTH) {
			if (charFifo->head != NULL) { // more char(s) in queue
				//PORTC = 3; // printing first column of a new char
				screenBlank = FALSE;
				blankCols = 0;
				spaceMode = 0;
				space = 0;
				charTableIndex = dequeue(charFifo);
				charCol = 0;
			} else { // no more chars (right now)
				//PORTC = 4; // spaces all the way down
				if (++blankCols == 7)
					screenBlank = TRUE;
				spaceMode = 1;
				space = SPACE_WIDTH - 1; // one more space
			};
		} else { // space < SPACE_WIDTH
			//PORTC = 2; // printing a space
		};
	} else { // spaceMode = 0
		//PORTC = 1; // printing a char column
	};

	// end of char
	if (!spaceMode && charCol == charTable->width[charTableIndex]) {
		//PORTC = 2;
		spaceMode = 1;
		space = 0;
		charCol = 0;
	};

	shiftPixelsLeft(red, green, blue);


	if (/*charFifo->head == NULL || */ spaceMode) {
		for (row = 0; row <= 7; row++) {
			red[8*row + 7] = 0;
			green[8*row + 7] = 0;
			blue[8*row + 7] = 0;
		};
	} else {
		for (row = 0; row <= 7; row++) {
			pixelAddr = &charTable->pixels[charTableIndex]
				[charTable->width[charTableIndex]*row
				+ charCol];
			pixel = pgm_read_byte(pixelAddr);
			red[8*row + 7] = pixel * mult[0];
			green[8*row + 7] = pixel * mult[1];
			blue[8*row + 7] = pixel * mult[2];
		};
	};

	if (spaceMode)
		space++;
	else
		charCol++;

	return (screenBlank);
}


void scrollReset(void)
{
	spaceMode = 1;
	space = SPACE_WIDTH - 1; // one more space
	screenBlank = FALSE;
}
