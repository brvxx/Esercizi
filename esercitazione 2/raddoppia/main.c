#include <stdlib.h>
#include <stdint.h>

extern void raddoppia(uint32_t* x, size_t n);

int main(void) {

	size_t n = 5;
	uint32_t *v = malloc(n * sizeof(uint32_t));

	v[0] = 1;
	v[1] = 12;
	v[2] = 3;
	v[3] = 77;
	v[4] = 33;


	raddoppia(v, n);
	free(v);

	return 0;
}