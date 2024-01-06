#include <stdlib.h>

extern int* rotate(const int* vec, size_t len, size_t r);


int main(void) {

	int arr[] = { 1, 2, 3, 4 ,5};

	int* res = rotate(arr, 5, 3);


	return 0;
}