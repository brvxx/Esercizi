#include "matrix.h"

struct matrix* matrix_flip_v(const struct matrix* m) {
	if (m == NULL) {
		return NULL;
	}

	struct matrix* out = calloc(1, sizeof(struct matrix));
	out->rows = m->rows;
	out->cols = m->cols;
	out->data = calloc(out->rows * out->cols, sizeof(double));

	size_t m_rows = m->rows - 1; 
	for (size_t r = 0; r < out->rows; ++r) {
		for (size_t c = 0; c < out->cols; ++c) {
			out->data[r * out->cols + c] = m->data[m_rows * m->cols + c];
		}
		--m_rows;
	}
	return out;
}