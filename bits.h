#ifndef BITS_H
#define BITS_H

// uint8_t:
#include <avr/io.h>

typedef uint8_t byte;

// mask: 1 = replace this bit
char bitsReplace(byte base, byte newBits, byte mask);

void bitsToArray(byte bits, uint8_t array[8]);

#endif //BITS_H
