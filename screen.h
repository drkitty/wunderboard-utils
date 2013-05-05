#ifndef SCREEN_H
#define SCREEN_H

// uint8_t:
#include <stdint.h>
#include <avr/io.h>

/* Light the red, green, and blue layers at the specified column. */
inline void screenCol(uint8_t col, uint8_t red, uint8_t green, uint8_t blue)
{
	PORTE = col;

	SPDR = red;
	while ( !(SPSR & (1<<SPIF)) );
	SPDR = green;
	while ( !(SPSR & (1<<SPIF)) );
	SPDR = blue;
	while ( !(SPSR & (1<<SPIF)) );

	PORTB = PORTB | (1<<7);
	PORTB = PORTB ^ (1<<7);
}

void clearScreen(void);

/* Erase the previous column and paint the current one, using the red, green,
 * and blue buffers. Each buffer element is a column. Bit 7 of element 7 is
 * the upper-left pixel. */
void screenArray(const uint8_t red[8], const uint8_t green[8],
		const uint8_t blue[8]);

/* Erase the previous column and paint the current one, using the red, green,
 * and blue buffers. Each buffer element is a pixel's brightness level from 0
 * (off) to brightnessLevels - 1. Buffers are row-major; element 0 is the
 * upper-left pixel. */
void screenArrayFullColor(uint8_t red[64], uint8_t green[64], uint8_t blue[64],
		uint8_t brightnessLevels);

#endif // SCREEN_H
