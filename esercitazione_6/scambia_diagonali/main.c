#include "matrix.h"

int main(void) {

	double m[3 * 3] = {
		1, 2, 3,
		4, 5, 6,
		7, 8, 9,
	};

	struct matrix A = { 3, 3, m };
	struct matrix* res = scambia_diagonali(&A);
	matrix_stampa(res);

	free(res->data);
	free(res);
	return 0; 
}