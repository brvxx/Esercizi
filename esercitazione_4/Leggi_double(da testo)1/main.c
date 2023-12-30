#include "lettura.h"

int main(void) {

	size_t size = 0; 
	double* ptr = leggidouble("dati1.txt", &size);

	for (size_t i = 0; i < size; ++i) {
		printf("%e\n", ptr[i]);
	}

	return 0; 
}