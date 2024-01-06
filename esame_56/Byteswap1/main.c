#include "byteswap.h"

int main(void) {

	uint32_t val = 0x0a0b0c0d;

	uint32_t res = byteswap(val);

	return 0;
}