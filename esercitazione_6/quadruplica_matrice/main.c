#include "matrix.h"

int main(void) {

	double m[2 * 2] = {
		1, 2,
		3, 4,

	};
	struct matrix A = { 2, 2, m };
	struct matrix* B = matrix_quadruplica(&A);
	matrix_stampa(B);




	return 0;
}