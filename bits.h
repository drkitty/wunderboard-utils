#ifndef BITS_H
#define BITS_H

// uint8_t:
#include <stdint.h>

inline uint8_t getBit(uint8_t byte, uint8_t place)
{
	return (byte & (1<<place)) ? 1 : 0;
}

inline uint8_t replaceBit(uint8_t base, uint8_t newBit, uint8_t place)
{
	if (newBit)
		return base | (1 << place);
	else
		return base & (0xFF ^ (1 << place));
}

// mask: 1 = replace this bit
uint8_t replaceBits_mask(uint8_t base, uint8_t newBits, uint8_t mask);

void explodeByte(uint8_t bits, uint8_t array[8]);

#endif //BITS_H
