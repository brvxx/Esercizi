#include "matrix.h"

void matrix_stampa(const struct matrix* m) {
	if (m == NULL) {
		return; 
	}
	for (size_t r = 0; r < m->rows; ++r) {
		for (size_t c = 0; c < m->cols; ++c) {
			printf("%lf ", m->data[r * m->cols + c]);
		}
		fputc('\n', stdout);
	}
}
int main(void) {

	double data[2 * 3] = {
		1, 2, 3,
		4, 5, 6,
	};
	struct matrix A = { 2, 3, data };
	struct matrix* res = mat_transpose(&A);
	matrix_stampa(res);

	return 0;
}