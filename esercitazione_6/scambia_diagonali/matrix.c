#include "matrix.h"

struct matrix* scambia_diagonali(const struct matrix* m) {
	
	if (m == NULL || (m->rows != m->cols)) {
		return NULL;
	}

	struct matrix* out = calloc(1, sizeof(struct matrix));
	out->rows = m->rows;
	out->cols = m->cols; 
	out->data = calloc(m->rows * m->cols, sizeof(double));

	memcpy(out->data, m->data,(m->rows * m->cols) * sizeof(double));

	for (size_t r = 0; r < out->rows; ++r) {
		for (size_t c = 0; c < out->cols; ++c) {
			if ((c+r) == ((out->rows) - 1)) {
				out->data[r * out->cols + c] = m->data[r * m->cols + r];
				out->data[r * out->cols + r] = m->data[r * m->cols + c];

			}
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

