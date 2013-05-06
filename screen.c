#include <avr/interrupt.h>

#include "screen.h"
#include "bits.h"


void clearScreen()
{
	for (uint8_t i=0; i <= 7; i++) {
		screenCol(i, 0x00, 0x00, 0x00);
	};
}

void screenArray(const uint8_t red[8], const uint8_t green[8],
		const uint8_t blue[8])
{
	static uint8_t col;

	screenCol(col, 0x00, 0x00, 0x00);
	if (++col == 8)
		col = 0;
	screenCol(col, red[col], green[col],
			blue[col]);
}

void screenArrayFullColor(uint8_t red[64], uint8_t green[64], uint8_t blue[64],
		uint8_t brightnessLevels)
{
	static uint8_t col = 0;
	static uint8_t brightCounter = 0;

	/* {red, green, blue} */
	static uint8_t colBits[3];

	static uint8_t row;

	screenCol(col, 0x00, 0x00, 0x00);

	if (++col == 8) {
		col = 0;
		if (++brightCounter == brightnessLevels - 1)
			brightCounter = 0;
	};

	colBits[0] = 0x00;
	for (row = 0; row <= 7; row++) {
		if (red[(7-row)*8 + (7-col)] > brightCounter)
			colBits[0] |= 1<<row;
	};

	colBits[1] = 0x00;
	for (row = 0; row <= 7; row++) {
		if (green[(7-row)*8 + (7-col)] > brightCounter)
			colBits[1] |= 1<<row;
	};

	colBits[2] = 0x00;
	for (row = 0; row <= 7; row++) {
		if (blue[(7-row)*8 + (7-col)] > brightCounter)
			colBits[2] |= 1<<row;
	};

	screenCol(col, colBits[0], colBits[1], colBits[2]);
}
