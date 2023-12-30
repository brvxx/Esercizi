#include <stdlib.h>
#include <stdint.h>

void raddoppia(uint32_t* x, size_t n) {

	if (x == NULL) {
		return;
	}
	for (size_t i = 0; i < n; ++i) {
		x[i] = x[i] * 2;
	}
}