#include "matrix.h"

struct matrix* mat_rowmul(const struct matrix* m1, const struct matrix* m2) {
	if (m1 == NULL || m2 == NULL || (m2->cols != 1) || (m2->rows != m1->rows)) {
		return NULL;
	}

	struct matrix* res = calloc(1, sizeof(struct matrix));
	res->rows = m1->rows;
	res->cols = m1->cols;
	res->data = calloc(res->cols * res->rows, sizeof(double)); 
	
	size_t r_m2 = 0;
	for (size_t r = 0; r < res->rows; ++r) {
		for (size_t c = 0; c < res->cols; ++c) {
			res->data[r * res->cols + c] = m1->data[r * res->cols + c] * m2->data[r_m2 * m2->cols];
		}
		++r_m2;
	}
	return res;
}
