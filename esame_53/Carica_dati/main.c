#include "dataset.h"

int main(void) {

	struct dataset* res = dataset_load("file2.txt");

	printf("%zu files\n", res->nrows);

	for (size_t i = 0; i < res->nrows; ++i) {
		printf("file: %s, case: %c\n", res->data[i].filename, res->data[i].prognosis);
	}


	return 0;
}