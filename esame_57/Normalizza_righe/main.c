#include "matrix.h"

int main(void) {
	
	double data[2 * 3] = {
		1, 2, 3,
		4, 5, 6,
	};
	struct matrix A = { 2, 3, data };
	mat_normalize_rows(&A);

	return 0;
}