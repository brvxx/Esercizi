#include "lettura.h"

double* leggidouble(const char* filename, size_t* size) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	double* res = NULL;
	double tmp;
	size_t num_idx = 0;

	while (fscanf(f, "%lf", &tmp) == 1) {
		num_idx += 1;
		res = realloc(res, num_idx * sizeof(double));
		res[num_idx - 1] = tmp; 
	}
	*size = num_idx;
	fclose(f);
	return res;
}