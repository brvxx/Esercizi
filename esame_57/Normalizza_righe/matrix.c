#include "matrix.h"

double norma(double* p, size_t n) {
	double norma = 0; 
	for (size_t i = 0; i < n; ++i) {
		norma += p[i] * p[i];
	}
	return sqrt(norma);
}

void mat_normalize_rows(struct matrix* m) {
	if (m == NULL) {
		return;
	}

	for (size_t r = 0; r < m->rows; ++r) {
		double norm = norma(&(m->data[r * m->cols]), m->cols);
		for (size_t c = 0; c < m->cols; ++c) {
			if (norm == 0) {
				m->data[r * m->cols + c] = 0; 
			}
			else {
				m->data[r * m->cols + c] /= norm;
			}
		}
	}
	return; 
}