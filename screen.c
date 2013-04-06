#include "screen.h"
#include "bits.h"

/*// uint8_t:
#include <avr/io.h>*/
/*#include <stdlib.h>*/

void screenColBits(byte col, byte red, byte green, byte blue) {
	PORTE = bitsReplace(PORTE, col, 0b111);

	SPDR = red;
	while ( !(SPSR & (1<<SPIF)) );
	SPDR = green;
	while ( !(SPSR & (1<<SPIF)) );
	SPDR = blue;
	while ( !(SPSR & (1<<SPIF)) );

	PORTB = PORTB | (1<<7);
	PORTB = PORTB ^ (1<<7);
}

void clearScreen() {
	for (uint8_t i=0; i <= 7; i++) {
		screenColBits(i, 0x00, 0x00, 0x00);
	};
}

void screenArray(const byte red[8], const byte green[8], const byte blue[8]) {
	for (uint8_t i=0; i <= 7; i++) {
		screenColBits(i, red[i], green[i], blue[i]);
		screenColBits(i, 0, 0, 0);
	};
}
