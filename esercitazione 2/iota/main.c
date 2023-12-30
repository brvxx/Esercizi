#include <stdlib.h>
#include <stdint.h>

extern void iota(uint32_t* x, size_t n);

int main(void) {

	size_t n = 6;
	uint32_t* v = malloc(n * sizeof(uint32_t));

	v[0] = 1;
	v[1] = 4;
	v[2] = 12;
	v[3] = 55;
	v[4] = 31;
	v[5] = 7;

	iota(v, n);
	free(v); 
	
	return 0;

}