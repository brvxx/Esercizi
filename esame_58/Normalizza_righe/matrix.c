#include "matrix.h"

double norma(double* p, size_t n) {
	double norma = 0; 
	for (size_t i = 0; i < n; ++i) {
		norma += p[i] * p[i];
	}
	return sqrt(norma);
}

struct matrix* mat_normalize_rows(const struct matrix* m) {
	if (m == NULL) {
		return NULL;
	}

	struct matrix* res = calloc(1, sizeof(struct matrix));
	res->rows = m->rows;
	res->cols = m->cols;
	res->data = calloc(res->rows * res->cols, sizeof(double));

	for (size_t r = 0; r < res->rows; ++r) {
		for (size_t c = 0; c < res->cols; ++c) {
			if (norma(&(m->data[r * m->cols]), m->cols) == 0) {
				res->data[r * res->cols + c] = 0; 
			}
			else {
				res->data[r * res->cols + c] = m->data[r * m->cols + c] / norma(&(m->data[r * m->cols]), m->cols);
			}
		}
	}
	return res; 
}