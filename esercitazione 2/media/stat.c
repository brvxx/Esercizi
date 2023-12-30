#include <stdlib.h>
#include "stat.h"

double media(double* x, unsigned int n) {

	if (x == NULL) {
		return 0;
	}
	if (n == 0) {
		return 0;
	}
	double somma = 0;
	for (size_t i = 0; i < n; ++i) {
		somma += x[i];
	}
	return somma / n;
}