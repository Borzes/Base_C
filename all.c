#include <stdio.h>
#include <stdint.h>
#include "bit_lib.h"
int main() {
	uint32_t number = 0xF16;
	uint32_t mask = 0x132;
	printf("SET BIT %x\n", BIT_SET(number, mask));
	printf("CLEAR BIT %x\n", CLEAR_BIT(number, mask));
	printf("INV BIT %x\n", INV_BIT(number, mask));
	uint8_t n8 = 0x32;
	uint16_t n16 = 0x3002;
	uint32_t n32 = 0x300002;
	int shift = 5;
	L_SHIFT(n8, shift);
	printf("%x\n", n8);
	R_SHIFT(n8, shift);
	printf("%x\n", n8);
	L_ROLL(n8, shift);
	printf("%x\n", n8);
	R_ROLL(n8, shift);
	printf("%x\n", n8);
	L_SHIFT(n16, shift);
	printf("%x\n", n16);
	R_SHIFT(n16, shift);
	printf("%x\n", n16);
	L_ROLL(n16, shift);
	printf("%x\n", n16);
	R_ROLL(n16, shift);
	printf("%x\n", n16);
	L_SHIFT(n32, shift);
	printf("%x\n", n32);
	R_SHIFT(n32, shift);
	printf("%x\n", n32);
	L_ROLL(n32, shift);
	printf("%x\n", n32);
	R_ROLL(n32, shift);
	printf("%x\n", n32);
	return 0;
}