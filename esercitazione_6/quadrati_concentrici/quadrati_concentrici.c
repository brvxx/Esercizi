#include <stdio.h>
#include <stdlib.h>

void stampa_array(int* p, size_t n) {
	
	for (size_t r = 0; r < n; ++r) {
		printf("%d ", p[r]%10);
	}
	printf("\n");
}

void stampa_quadrati_concentrici(int n) {

	if (n <= 0) {
		return;
	}

	size_t dim = (n * 2) - 1; 
	int* ptr = malloc(dim * sizeof(int));
	for (size_t g = 0; g < dim; ++g) {
		ptr[g] = n;
	}
	stampa_array(ptr, dim);
	
	size_t k = 1;
	for (; k <= dim / 2; ++k) {
		for (size_t j = 0; j < dim - 2 * k; ++j){
			ptr[j + k] = (n - 1)%10;
			}
		--n;
		stampa_array(ptr, dim);
	}
	for (size_t f = k - 1; f > 0; --f) {
		for (size_t p = 0; p < dim - 2 * f; ++p) {
			ptr[p + f] = (n + 1) % 10;
		}
		++n;
		stampa_array(ptr, dim);
	}
	free(ptr);
}