#ifndef TIMERCLOCK_H
#define TIMERCLOCK_H

// uint8_t:
#include <avr/io.h>
#include "bits.h"

// set Waveform Generation Mode
void TC0_setWGM0(uint8_t mode);

// set Compare Match Output A Mode
void TC0_setCOM0A(uint8_t mode);

// set Clock Select
void TC0_setCS0(uint8_t mode);

// set Output Compare Register A
void TC0_setOCR0A(uint8_t x);

// set Timer/Counter0 Output Compare Match A Interrupt Enable
void TC0_enableOCMInterrupts(void);

// clear Timer/Counter0 Output Compare Match A Interrupt Enable
void TC0_disableOCMInterrupts(void);

#endif // TIMERCLOCK_H