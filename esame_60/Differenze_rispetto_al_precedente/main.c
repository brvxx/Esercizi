#include "matrix.h"

int main(void) {
	
	double data[3 * 3] = {
		9, 2, 3,
		8, 5, 1,
		2, 7, 4,
	};
	
	struct matrix A = { 3, 3, data };

	struct matrix* new_A = mat_diffleft(&A);


	return 0; 
}