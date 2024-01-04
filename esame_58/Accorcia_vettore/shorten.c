#include <stdlib.h>

size_t shorten(int* v, size_t n, int max){
	if (v == NULL) {
		return 0;
	}

	size_t i = 0;
	size_t new_idx = 0;

	while (i < n) {
		if (v[i] <= max) {
			v[new_idx] = v[i];
			++new_idx;
		}
		++i;
	}
	return new_idx;
}