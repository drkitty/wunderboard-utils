#ifndef BITS_H
#define BITS_H

// uint8_t:
#include <avr/io.h>

// mask: 1 = replace this bit
char bitsReplace(uint8_t base, uint8_t newBits, uint8_t mask);

void bitsToArray(uint8_t bits, uint8_t array[8]);

#endif //BITS_H
