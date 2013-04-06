#ifndef SCREEN_H
#define SCREEN_H

// uint8_t:
#include <avr/io.h>

typedef uint8_t byte;

/* Light the red, green, and blue layers at the specified column. */
void screenColBits(byte col, byte red, byte green, byte blue);

void clearScreen(void);

/* Light the red, blue, and green layers (each element is a column), then clear
 * the screen. */
void screenArray(const byte red[8], const byte green[8], const byte blue[8]);

#endif // SCREEN_H
