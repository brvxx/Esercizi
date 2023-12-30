#include "matrix.h"

struct matrix* mat_transpose(const struct matrix* mat) {
	
	if (mat == NULL) {
		return NULL;
	}

	double* index = calloc((mat->rows * mat->cols), sizeof(double));

	for (size_t r = 0; r < mat->rows; ++r) {
		for (size_t c = 0; c < mat->cols; ++c) {
			index[c * mat->rows + r] = mat->data[r * mat->cols + c];
		}
	}

	struct matrix* ptr = calloc(1, sizeof(struct matrix));
	
	ptr->rows = mat->cols; 
	ptr->cols = mat->rows; 
	ptr->data = index;

	return ptr;
}
void matrix_stampa(const struct matrix* m)
{
	for (size_t r = 0; r < m->rows; ++r) {
		for (size_t c = 0; c < m->cols; ++c) {
			printf("%lf ", m->data[r * m->cols + c]);
		}
		printf("\n");
	}
}