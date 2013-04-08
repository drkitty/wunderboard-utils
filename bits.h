#ifndef BITS_H
#define BITS_H

// uint8_t:
#include <avr/io.h>

uint8_t replaceBit(uint8_t base, uint8_t newBit, uint8_t place);

// mask: 1 = replace this bit
uint8_t replaceBits_mask(uint8_t base, uint8_t newBits, uint8_t mask);

void explodeByte(uint8_t bits, uint8_t array[8]);

#endif //BITS_H
