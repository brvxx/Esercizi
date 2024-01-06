#include "matrix.h"

struct matrix* matrix_quadruplica(const struct matrix* m) {
	if (m == NULL) {
		return NULL;
	}
	struct matrix* res = calloc(1, sizeof(struct matrix));
	res->rows = m->rows * 2;
	res->cols = m->cols * 2;
	res->data = calloc(res->rows * res->cols, sizeof(double));

	for (size_t r = 0; r < res->rows; ++r) {
		for (size_t c = 0; c < res->cols; ++c) {
			res->data[r * res->cols + c] = m->data[(r % m->rows) * m->cols + (c % m->cols)];
		}
	}
	return res;
}
