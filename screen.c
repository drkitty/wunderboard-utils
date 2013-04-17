#include <avr/interrupt.h>

#include "screen.h"
#include "bits.h"

void screenCol(uint8_t col, uint8_t red, uint8_t green, uint8_t blue)
{
	PORTE = replaceBits_mask(PORTE, col, 0b111);

	SPDR = red;
	while ( !(SPSR & (1<<SPIF)) );
	SPDR = green;
	while ( !(SPSR & (1<<SPIF)) );
	SPDR = blue;
	while ( !(SPSR & (1<<SPIF)) );

	PORTB = PORTB | (1<<7);
	PORTB = PORTB ^ (1<<7);
}

void clearScreen()
{
	for (uint8_t i=0; i <= 7; i++) {
		screenCol(i, 0x00, 0x00, 0x00);
	};
}

void screenArray(const uint8_t red[8], const uint8_t green[8],
		const uint8_t blue[8])
{
	for (uint8_t i=0; i <= 7; i++) {
		screenCol(i, red[i], green[i], blue[i]);
		screenCol(i, 0, 0, 0);
	};
}

void screenArrayFullColor(uint8_t red[64], uint8_t green[64], uint8_t blue[64],
		uint8_t* counter, uint8_t brightnessLevels)
{
	/* red, green, blue */
	uint8_t colBits[3];

	uint8_t col, row;

	for (col = 0; col <= 7; col++) {
		colBits[0] = 0x00;
		for (row = 0; row <= 7; row++) {
			if (red[(7-row)*8 + (7-col)] > *counter)
				colBits[0] |= 1<<row;
		};

		colBits[1] = 0x00;
		for (row = 0; row <= 7; row++) {
			if (green[(7-row)*8 + (7-col)] > *counter)
				colBits[1] |= 1<<row;
		};

		colBits[2] = 0x00;
		for (row = 0; row <= 7; row++) {
			if (blue[(7-row)*8 + (7-col)] > *counter)
				colBits[2] |= 1<<row;
		};

		cli();
		screenCol(col, colBits[0], colBits[1], colBits[2]);
		screenCol(col, 0x00, 0x00, 0x00);
		sei();
	};

	*counter = (*counter + 1) % (brightnessLevels - 1);
}
