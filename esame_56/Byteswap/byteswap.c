#include "byteswap.h"

uint32_t byteswap(uint32_t n) {
	
	uint32_t num = n;
	uint8_t* ptr = &num;
	uint8_t tmp = 0; 

	tmp = ptr[0];
	ptr[0] = ptr[3];
	ptr[3] = tmp;	
	tmp = 0; 

	tmp = ptr[1];
	ptr[1] = ptr[2];
	ptr[2] = tmp;

	return num;
}