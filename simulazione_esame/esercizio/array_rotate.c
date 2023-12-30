#include <stdlib.h>


int* rotate(const int* vec, size_t len, size_t r) {

	if (vec == NULL) {
		return NULL;
	}
	int* p = malloc(len * sizeof(int));
	
	for (size_t i = 0; i < len; ++i) {
		p[(r + i)%len] = vec[i];
	}
	
	return p;
}