#include "bits.h"

uint8_t replaceBits_mask(uint8_t base, uint8_t newBits, uint8_t mask)
{
	return base ^ ((base ^ newBits) & mask);
	//     base ^ ((     delta    ) & mask)
	//     base ^ (     masked delta      )
}

void explodeByte(uint8_t bits, uint8_t array[8])
{
		for (uint8_t i=0; i <= 7; i++) {
			array[i] = (bits & (1<<i)) ? 1 : 0;
		};
}
