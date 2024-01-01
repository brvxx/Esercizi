#include "matrix.h"

void matrix_print(struct matrix* mat) {

	for (size_t r = 0; r < mat->N; ++r) {
		for (size_t c = 0; c < mat->M; ++c) {
			printf("%lf ", mat->data[r * mat->M + c]);
		}
		fputc('\n', stdout);
	}
}

int main(void) {

	double data[3 * 3] = {
		1, 2, 3,
		4, 5, 6,
		7, 8, 9,
	};
	struct matrix A = { 3 , 3 , data };

	mat_swaprows(&A, 0, 2);

	matrix_print(&A);

	return 0; 
}