#include "lettura.h"


int main(void) {

	size_t numbs;
	double* res = leggidouble("dati1.txt", &numbs);

	free(res);

	return 0;
}