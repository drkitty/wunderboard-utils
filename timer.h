#ifndef TIMER_H
#define TIMER_H

// uint8_t:
#include <avr/io.h>
#include "bits.h"

enum CS0_prescale {
	CS0_1    = 1,
	CS0_8    = 2,
	CS0_64   = 3,
	CS0_256  = 4,
	CS0_1024 = 5
};

// set Waveform Generation Mode
void TC0_setWGM0(uint8_t mode);

// set Compare Match Output A Mode
void TC0_setCOM0A(uint8_t mode);

void TC0_setCOM0B(uint8_t mode);

// set Clock Select
void TC0_setCS0(uint8_t mode);

// set Output Compare Register A
void TC0_setOCR0A(uint8_t x);

void TC0_setOCR0B(uint8_t x);

// set Timer/Counter0 Output Compare Match A Interrupt Enable
void TC0_enableOCI_A(void);

void TC0_enableOCI_B(void);

// clear Timer/Counter0 Output Compare Match A Interrupt Enable
void TC0_disableOCI_A(void);

void TC0_disableOCI_B(void);

#endif // TIMER_H