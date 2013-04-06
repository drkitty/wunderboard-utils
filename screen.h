#ifndef SCREEN_H
#define SCREEN_H

// uint8_t:
#include <avr/io.h>

/* Light the red, green, and blue layers at the specified column. */
void screenColBits(uint8_t col, uint8_t red, uint8_t green, uint8_t blue);

void clearScreen(void);

/* Light the red, blue, and green layers (each element is a column), then clear
 * the screen. */
void screenArray(const uint8_t red[8], const uint8_t green[8],
		const uint8_t blue[8]);

#endif // SCREEN_H
