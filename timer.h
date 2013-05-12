#ifndef TIMER_H
#define TIMER_H

#include <avr/io.h> // uint8_t
#include "types.h" // BOOL, TRUE, FALSE
#include "bits.h"

enum WGM0_t {
	WGM0_NORMAL = 0,
	WGM0_CTC    = 2
};

enum WGM1_t {
	WGM1_NORMAL            =  0,
	WGM1_FASTPWM_TOP_00FF  =  1,
	WGM1_FASTPWM_TOP_01FF  =  2,
	WGM1_FASTPWM_TOP_03FF  =  3,
	WGM1_CTC               =  4,
	WGM1_FASTPWM_TOP_ICR1  = 14,
	WGM1_FASTPWM_TOP_OCR1A = 15
};

enum WGM2_t {
	WGM2_NORMAL = 0,
	WGM2_CTC    = 2
};

enum WGM3_t {
	WGM3_NORMAL            =  0,
	WGM3_FASTPWM_TOP_00FF  =  1,
	WGM3_FASTPWM_TOP_01FF  =  2,
	WGM3_FASTPWM_TOP_03FF  =  3,
	WGM3_CTC               =  4,
	WGM3_FASTPWM_TOP_ICR3  = 14,
	WGM3_FASTPWM_TOP_OCR3A = 15
};

enum COM_CTC_t { // OCnx mode
	COM_CTC_NORMAL = 0,
	COM_CTC_TOGGLE = 1, // toggle at OCRnx
	COM_CTC_CLR    = 2, // clear at OCRnx
	COM_CTC_SET    = 3  // set at OCRnx
};

enum COM_FASTPWM_t { // OCnx mode
	COM_FASTPWM_NORMAL            = 0,
	COM_FASTPWM_TOGGLE_OCRnx      = 1, // toggle at OCRnx
	COM_FASTPWM_SET_TOP_CLR_OCRnx = 2, // set at TOP, clear at OCRnx
	COM_FASTPWM_CLR_TOP_SET_OCRnx = 3  // clear at TOP, set at OCRnx
};

enum CS_t {
	CS_NOCLOCK = 0,
	CS_1       = 1,
	CS_8       = 2,
	CS_64      = 3,
	CS_256     = 4,
	CS_1024    = 5
};

// set Waveform Generation Mode
void TC0_setWGM0(uint8_t mode);
void TC1_setWGM1(uint8_t mode);
void TC3_setWGM3(uint8_t mode);

// set Compare Match Output Mode
void TC0_setCOM0A(uint8_t mode);
void TC0_setCOM0B(uint8_t mode);

void TC1_setCOM1A(uint8_t mode);

// set Clock Select
void TC0_setCS0(uint8_t mode);
void TC1_setCS1(uint8_t mode);
void TC3_setCS3(uint8_t mode);

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
