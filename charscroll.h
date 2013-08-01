#ifndef CHARSCROLL_H
#define CHARSCROLL_H

#include <stdlib.h>
#include <stdint.h>
#include <avr/pgmspace.h>
#include <stdbool.h>

#include "types.h"
#include "fifo.h"
#include "characters_full_color.h"

#define SPACE_WIDTH 1

inline void shiftPixelsLeft(uint8_t red[], uint8_t green[], uint8_t blue[])
{
	uint8_t row, col;

	for (row = 0; row <= 7; row++) {
		for (col = 0; col <= 6; col++) {
			red[8*row + col] = red[8*row + col + 1];
			green[8*row + col] = green[8*row + col + 1];
			blue[8*row + col] = blue[8*row + col + 1];
		};
	};
}

bool scroll(struct fifo* charFifo, struct charTable_t* charTable,
		uint8_t red[64], uint8_t green[64], uint8_t blue[64]);

void scrollReset(void);

#endif // CHARSCROLL_H
