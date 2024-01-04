#include <stdio.h>

extern size_t shorten(int* v, size_t n, int max);

int main(void) {

	size_t size_x = 11;
	int x[] = { 5, 1, 7, 9, 11, 3, 8, 2, 1, 3, 5 };
	size_t new_size = shorten(x, size_x, 7);

	for (size_t i = 0; i < new_size; ++i) {
		printf("%d, ", x[i]);
	}

	return 0; 
}