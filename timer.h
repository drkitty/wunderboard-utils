#ifndef TIMER_H
#define TIMER_H

// uint8_t:
#include <avr/io.h>
#include "types.h"
#include "bits.h"

enum WGM0_t {
	WGM0_NORMAL = 0,
	WGM0_CTC    = 2
};

enum WGM1_t {
	WGM1_NORMAL = 0,
	WGM1_CTC    = 4
};

enum WGM2_t {
	WGM2_NORMAL = 0,
	WGM2_CTC    = 2
};

enum WGM3_t {
	WGM3_NORMAL = 0,
	WGM3_CTC    = 4
};

enum CSn_t {
	CSn_NOCLOCK = 0,
	CSn_1       = 1,
	CSn_8       = 2,
	CSn_64      = 3,
	CSn_256     = 4,
	CSn_1024    = 5
};

// set Waveform Generation Mode
void TC0_setWGM0(uint8_t mode);
void TC1_setWGM1(uint8_t mode);
void TC3_setWGM3(uint8_t mode);

// set Compare Match Output A Mode
void TC0_setCOM0A(uint8_t mode);

void TC0_setCOM0B(uint8_t mode);

// set Clock Select
void TC0_setCS0(uint8_t mode);
void TC1_setCS1(uint8_t mode);
void TC3_setCS3(uint8_t mode);

// set Output Compare Register A
void TC0_setOCR0A(uint8_t x);
void TC1_setOCR1A(uint16_t x);
void TC3_setOCR3A(uint16_t x);

// set Output Compare Register B
void TC0_setOCR0B(uint8_t x);

// set Output Compare Match A Interrupt Enable
void TC0_enableOCI_A(void);
void TC1_enableOCI_A(void);
void TC3_enableOCI_A(void);

// set Output Compare Match B Interrupt Enable
void TC0_enableOCI_B(void);

// clear Output Compare Match A Interrupt Enable
void TC0_disableOCI_A(void);
void TC1_disableOCI_A(void);
void TC3_disableOCI_A(void);

// clear Output Compare Match B Interrupt Enable
void TC0_disableOCI_B(void);

BOOL TC1_getOCF1A(void);
void TC1_resetOCF1A(void);

#endif // TIMER_H
