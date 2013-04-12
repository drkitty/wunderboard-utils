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
		screenColBits(i, 0x00, 0x00, 0x00);
	};
}

void screenArray(const uint8_t red[8], const uint8_t green[8],
		const uint8_t blue[8])
{
	for (uint8_t i=0; i <= 7; i++) {
		screenColBits(i, red[i], green[i], blue[i]);
		screenColBits(i, 0, 0, 0);
	};
}
