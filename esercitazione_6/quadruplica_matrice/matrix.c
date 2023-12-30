#include "matrix.h"

struct matrix* matrix_quadruplica(const struct matrix* m) {
	if (m == NULL) {
		return NULL;
	}

	struct matrix* out = calloc(1, sizeof(struct matrix));
	out->rows = 2 * m->rows;
	out->cols = 2 * m->cols;
	out->data = calloc(out->rows * out->cols, sizeof(double));

	for (size_t r = 0; r < out->rows; r++) {
		for (size_t c = 0; c < out->cols; c++) {
			out->data[r * out->cols + c] = m->data[(r % m->rows) * m->cols + (c % m->cols)];
		}
	}	
	return out;
}

void matrix_stampa(const struct matrix* m) {
	for (size_t r = 0; r < m->rows; ++r) {
		for (size_t c = 0; c < m->cols; ++c) {
			printf("%lf ", m->data[r * m->cols + c]);
		}
		printf("\n");
	}
}
