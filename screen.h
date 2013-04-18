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

/* Light the red, green, and blue layers (each element is a column), then clear
 * the screen. */
void screenArray(const uint8_t red[8], const uint8_t green[8],
		const uint8_t blue[8]);

/* Light the red, green, and blue layers (each element is a brightness level),
 * then clear the screen. */
void screenArrayFullColor(uint8_t red[64], uint8_t green[64], uint8_t blue[64],
		uint8_t* counter, uint8_t brightnessLevels);

/* Same, but cli() before calling screenCol and sei() after*/
void screenArrayFullColor_block(uint8_t red[64], uint8_t green[64],
		uint8_t blue[64], uint8_t* counter, uint8_t brightnessLevels);

#endif // SCREEN_H
