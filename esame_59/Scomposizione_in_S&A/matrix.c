#include "matrix.h"

void mat_symdecomp(const struct matrix* m, struct matrix* S, struct matrix* A) {
	if (m == NULL || S == NULL || A == NULL || (m->cols != m->rows)) {
		return;
	}
	S->cols = m->cols;
	S->rows = m->rows;
	S->data = calloc(S->cols * S->rows, sizeof(double));
	for (size_t r = 0; r < S->rows; ++r) {
		for (size_t c = 0; c < S->cols; ++c) {
			S->data[r * S->cols + c] = (m->data[r * m->cols + c] + m->data[c * m->cols + r]) / 2;
		}
	}
	A->cols = m->cols;
	A->rows = m->rows;
	A->data = calloc(A->cols * A->rows, sizeof(double));
	for (size_t r = 0; r < A->rows; ++r) {
		for (size_t c = 0; c < A->cols; ++c) {
			A->data[r * A->cols + c] = (m->data[r * m->cols + c] - m->data[c * m->cols + r]) / 2;
		}
	}
}