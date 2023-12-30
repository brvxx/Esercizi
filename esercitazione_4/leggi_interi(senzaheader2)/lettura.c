#include "lettura.h"

int* leggiinteri2(const char* filename, size_t* size) {

	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}

	size_t c = 4;
	size_t n = 0;
	int num = 0;
	int* arr = malloc(c * sizeof(int));
	while (fread(&num, sizeof(int), 1, f) == 1) {
		++n;
		if (n >= c) {
			c *= 2;
			arr = realloc(arr, c * sizeof(int));
		}
		arr[n - 1] = num;
	}
	if (n == 0) {
		return NULL;
	}
	*size = n;

	fclose(f);
	return arr;
}