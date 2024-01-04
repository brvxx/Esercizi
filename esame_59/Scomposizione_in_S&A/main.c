#include "matrix.h"

int main(void) {

	double data[3 * 3] = {
		9, 2, 3,
		8, 5, 1,
		2, 7, 4,
	};
	struct matrix M = { 3, 3, data };
	struct matrix S = { 0, 0, NULL };
	struct matrix A = { 0, 0, NULL };

	mat_symdecomp(&M, &S, &A);

	return 0;
}