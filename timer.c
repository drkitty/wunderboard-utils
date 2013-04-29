#include "timer.h"

// set Waveform Generation Mode
void TC0_setWGM0(uint8_t mode)
{
	TCCR0B = replaceBit(TCCR0B, getBit(mode,2), 3);
	TCCR0A = replaceBits_mask(TCCR0A, mode & 0b11, 0b11);
	// WGM02:0 = mode
}

void TC1_setWGM1(uint8_t mode)
{
	TCCR1B = replaceBits_mask(TCCR1B, mode << 1, 0b11000); // from 0b1100
	TCCR1A = replaceBits_mask(TCCR1A, mode, 0b11);
	// WGM13:0 = mode
}

// set Compare Match Output A Mode
void TC0_setCOM0A(uint8_t mode)
{
	TCCR0A = replaceBits_mask(TCCR0A, mode << 6, 0b11000000);
	// COM0A1:0 = mode
}

void TC0_setCOM0B(uint8_t mode)
{
	TCCR0A = replaceBits_mask(TCCR0A, mode << 4, 0b00110000);
	// COM0B1:0 = mode
}

// set Clock Select
void TC0_setCS0(uint8_t mode)
{
	TCCR0B = replaceBits_mask(TCCR0B, mode, 0b111);
	// CS02:0 = mode
}

void TC1_setCS1(uint8_t mode)
{
	TCCR1B = replaceBits_mask(TCCR1B, mode, 0b111);
	// CS12:0 = mode
}

// set Output Compare Register A
void TC0_setOCR0A(uint8_t x)
{
	OCR0A = x;
}

void TC1_setOCR1A(uint16_t x)
{
	OCR1A = x;
}

void TC0_setOCR0B(uint8_t x)
{
	OCR0B = x;
}

// enable Output Compare Match A interrupt
void TC0_enableOCI_A(void)
{
	TIMSK0 = replaceBit(TIMSK0, 1, 1);
	// OCIE0A = 1
}

void TC1_enableOCI_A(void)
{
	TIMSK1 = replaceBit(TIMSK1, 1, 1);
	// OCIE1A = 1
}

// enable Output Compare Match B interrupt
void TC0_enableOCI_B(void)
{
	TIMSK0 = replaceBit(TIMSK0, 1, 2);
	// OCIE0B = 1
}

// disable Output Compare Match A interrupt
void TC0_disableOCI_A(void)
{
	TIMSK0 = replaceBit(TIMSK0, 0, 1);
	// OCIE0A = 0
}

void TC1_disableOCI_A(void)
{
	TIMSK1 = replaceBit(TIMSK1, 0, 1);
	// OCIE1A = 0
}

// disable Output Compare Match B interrupt
void TC0_disableOCI_B(void)
{
	TIMSK0 = replaceBit(TIMSK0, 0, 2);
	// OCIE0B = 0
}
