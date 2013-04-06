#include "bits.h"

char bitsReplace(byte base, byte newBits, byte mask) {
	return base ^ ((base ^ newBits) & mask);
	//     base ^ ((     delta    ) & mask)
	//     base ^ (     masked delta      )
}

void bitsToArray(byte bits, uint8_t array[8]) {
		for (uint8_t i=0; i <= 3; i++) {
			array[i] = (bits & (1<<i)) ? 1 : 0;
		};
}
