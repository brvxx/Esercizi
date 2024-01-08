#include "matrix.h"

struct matrix* mat_rotate180(const struct matrix* m) {
	if (m == NULL) {
		return NULL;
	}

	struct matrix* out = calloc(1, sizeof(struct matrix));
	out->rows = m->rows;
	out->cols = m->cols;
	out->data = calloc(out->rows * out->cols, sizeof(double));

	size_t rows = out->rows - 1;
	size_t cols = out->cols - 1; 
	for (size_t r = 0; r < out->rows; ++r) {
		cols = out->cols - 1;
		for (size_t c = 0; c < out->cols; ++c) {
			out->data[r * out->cols + c] = m->data[rows * m->cols + cols];
			--cols;
		}
		--rows;
	}
	return out;
}