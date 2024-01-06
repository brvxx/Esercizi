#include "stat.h"
#include <stdlib.h>

int main(void) {

	unsigned int n = 6;
	double* v = malloc(n * sizeof(double));

	v[0] = 32, v[1] = 39, v[2] = 77, v[3] = 32, v[4] = 2, v[5] = 11;

	double ris = varianza(v, n);

	free(v);
	return 0;

}