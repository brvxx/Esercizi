#include <stdint.h>
#include <stdlib.h>

extern void copy_vector(uint32_t* dst, uint32_t* src, size_t n);

int main(void) {

	size_t n = 6;
	uint32_t a[] = { 3, 6, 11, 45, 32, 2 };
	uint32_t* brisio = malloc(n * sizeof(uint32_t));

	copy_vector(brisio, a, n);

	free(brisio);

	return 0;
}