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
	uint8_t colBits[3];
	uint8_t* bufferSelector[3] = {red, green, blue};
	for (uint8_t col = 0; col <= 7; col++) {
		for (uint8_t color = 0; color <= 2; color++) {
			colBits[color] = 0x00;
			for (uint8_t row = 0; row <= 7; row++) {
				if (bufferSelector[color][(7-row)*8 + (7-col)] > *counter)
					colBits[color] |= 1<<row;
			};
		};
		screenCol(col, colBits[0], colBits[1], colBits[2]);
		screenCol(col, 0x00, 0x00, 0x00);
	};

	*counter = (*counter + 1) % (brightnessLevels - 1);
}
