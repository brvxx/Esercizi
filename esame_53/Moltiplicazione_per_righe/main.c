#include "matrix.h"

int main(void) {

	double data_a[2 * 3] = {
		1, 2, 3,
		4, 5, 6,
	};
	double data_b[2 * 1] = {
		2,
		3,
	};
	struct matrix a = { 2, 3, data_a };
	struct matrix b = { 2, 1, data_b };

	struct matrix* res = mat_rowmul(&a, &b);



	return 0;
}