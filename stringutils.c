#include "stringutils.h"

uint8_t myitoaStrLength(int16_t num, uint8_t base)
{
	uint8_t length = 0;
	uint16_t x = 1;
	uint16_t prevx;
	uint8_t negative = 0; // bool

	if (num < 0) {
		negative = 1;
		num = -num;
	};

	if (num == 0) {
		return 1;
	};

	while (x <= num) {
		length++;
		prevx = x;
		x *= base;
		if (x / base != prevx) {
			length--;
			break;
		};
	};

	if (negative)
		length++;

	return length;
}


void myitoa(int16_t num, char str[], uint8_t base)
{
	uint8_t strIndex;
	uint8_t digit;
	char temp;
	uint8_t negative = 0; // bool

	if (num < 0) {
		negative = 1;
		num = -num;
	};

	for (strIndex = 0; ; strIndex++) {
		digit = num % base;

		if (0 <= digit && digit <= 9)
			str[strIndex] = 0x30 + digit;
		else
			str[strIndex] = 0x41 + digit - 10;

		if (num == digit)
			break;

		num /= base;
	};
	/* strIndex is on the last numeric char */

	if (negative)
		str[++strIndex] = '-';

	/* note: integer division         here */
	for (int8_t i = 0; i <= (strIndex+1)/2 - 1; i++) {
		temp = str[i];
		str[i] = str[strIndex-i];
		str[strIndex-i] = temp;
	};

	str[strIndex + 1] = '\0';
}
