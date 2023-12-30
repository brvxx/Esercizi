#include <stdlib.h>
#include <stdint.h>

extern void raddoppia(uint32_t* x, size_t n);

int main(void) {

	uint32_t a[5] = { 1, 3, 66, 12, 9 };

	raddoppia(a, 5);

	return 0;
}