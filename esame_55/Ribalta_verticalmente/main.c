#include "matrix.h"

int main(void) {

	double data[2 * 3] = {
		1, 2, 3,
		4, 5, 6,
	};
	struct matrix A = { 2, 3, data };

	struct matrix* res = matrix_flip_v(&A);

	return 0;
}