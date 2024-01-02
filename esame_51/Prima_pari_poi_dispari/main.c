#include "paridispari.h"

int main(void) {

	int arr[] = { 1, 9, 8, 7, 2, 3, 5, 4, 6 };
	size_t sizev = 9;

	paridispari(arr, sizev);
	for (size_t i = 0; i < sizev; ++i) {
		printf("%d, ", arr[i]);
	}

	return 0;
}

