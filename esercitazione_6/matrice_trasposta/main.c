#include "matrix.h"

int main(void) {

	double m[2 * 3] = {
		1, 2, 3,
		4, 5, 6,
	};

	struct matrix A = { 2, 3, m };

	struct matrix* res = mat_transpose(&A);
	matrix_stampa(res);
	

	free(res->data);
	free(res);
	return 0;
}