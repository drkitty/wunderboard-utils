#include "timerclock.h"

// set Waveform Generation Mode
void TC0_setWGM0(uint8_t mode)
{
	TCCR0B = replaceBit(TCCR0B, getBit(mode,2), 3);
	TCCR0A = replaceBits_mask(TCCR0A, mode & 0b11, 0b11);
	// WGM02:0 = mode
}

// set Compare Match Output A Mode
void TC0_setCOM0A(uint8_t mode)
{
	TCCR0A = replaceBits_mask(TCCR0A, mode << 6, 0b11000000);
	// COM0A1:0 = mode
}

// set Clock Select
void TC0_setCS0(uint8_t mode)
{
	TCCR0B = replaceBits_mask(TCCR0B, mode, 0b111);
	// CS02:0 = mode
}

// set Output Compare Register A
void TC0_setOCR0A(uint8_t x)
{
	OCR0A = x;
}

void TC0_enableOCMInterrupts()
{
	TIMSK0 = replaceBit(TIMSK0, 1, 1);
	// OCIE0A = 1
}

void TC0_disableOCMInterrupts()
{
	TIMSK0 = replaceBit(TIMSK0, 0, 1);
	// OCIE0A = 0
}
