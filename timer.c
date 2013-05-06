#include "timer.h"

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

void TC3_setWGM3(uint8_t mode)
{
	TCCR3B = replaceBits_mask(TCCR3B, mode << 1, 0b11000); // from 0b1100
	TCCR3A = replaceBits_mask(TCCR3A, mode, 0b11);
	// WGM33:0 = mode
}

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

void TC3_setCS3(uint8_t mode)
{
	TCCR3B = replaceBits_mask(TCCR3B, mode, 0b111);
	// CS32:0 = mode
}

void TC0_setOCR0A(uint8_t x)
{
	OCR0A = x;
}

void TC3_setOCR3A(uint16_t x)
{
	OCR3A = x;
}

void TC1_setOCR1A(uint16_t x)
{
	OCR1A = x;
}

void TC0_setOCR0B(uint8_t x)
{
	OCR0B = x;
}

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

void TC3_enableOCI_A(void)
{
	TIMSK3 = replaceBit(TIMSK3, 1, 1);
	// OCIE3A = 1
}

void TC0_enableOCI_B(void)
{
	TIMSK0 = replaceBit(TIMSK0, 1, 2);
	// OCIE0B = 1
}

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

void TC3_disableOCI_A(void)
{
	TIMSK3 = replaceBit(TIMSK3, 0, 1);
	// OCIE3A = 0
}

void TC0_disableOCI_B(void)
{
	TIMSK0 = replaceBit(TIMSK0, 0, 2);
	// OCIE0B = 0
}

BOOL TC1_getOCF1A(void)
{
	return TIFR1 & (1<<OCF1A);
}

void TC1_resetOCF1A(void)
{
	TIFR1 |= 1<<OCF1A;
	// Don't ask.
}
