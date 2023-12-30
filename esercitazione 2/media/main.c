#include <stdlib.h>
#include "stat.h"

int main(void) {

	unsigned int n = 5;
	double* v = malloc(n * sizeof(double));

	v[0] = 12, v[1] = 11, v[2] = 33, v[3] = 78, v[4] = 0;

	double ris = media(v, n);

	free(v);
	return 0;
}