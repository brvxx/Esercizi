#include <stdlib.h>
#include <stdio.h>

extern int* read_gruppi(const char* filename, size_t* ngruppi);

int main(void) {

	size_t groups = 0;
	int* res = read_gruppi("file1.txt", &groups);

	for (size_t i = 0; i < groups; ++i) {
		printf("gruppo : %d\n", res[i]);
	}

	return 0;
}