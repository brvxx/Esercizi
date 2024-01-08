#include "matrix.h"

int main(void) {

	double data[] = {
		1, 2, 3,
		4, 5, 6,
	};
	struct matrix A = { 2, 3, data };

	struct matrix* res = mat_rotate180(&A);


	return 0;
}