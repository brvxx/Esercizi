#include "lettura.h"

double* leggidouble(const char* filename, size_t* size) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}
	
	double num;
	size_t c = 4;
	size_t n = 0;
	double* arr = malloc(c * sizeof(double));
	while (fscanf(f, "%lf", &num) == 1) {
		++n;
		if (n >= c) {
			c *= 2;
			arr = realloc(arr, c * sizeof(double));
		}
		arr[n - 1] = num;
	}
	if (n == 0) {
		free(arr);
		fclose(f);
		return NULL;
	}
	*size = n;
	fclose(f);
	return arr;
}