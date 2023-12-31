#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	if (argc == 1) {
		return 1; 
	}
	int* vec = calloc(argc - 1, sizeof(int));
	char* endptr; 
	for (int i = 0; i < argc - 1; ++i) {
		vec[i] = strtol(argv[i + 1], &endptr, 10);
		if (*endptr != 0) {
			return 1;
		}
	}
	size_t max_ind = 0;
	for (int k = 1; k < argc - 1; ++k) {
		if (vec[k] > vec[max_ind]) {
			max_ind = k;
		}
	}
	printf("%d", vec[max_ind]);
	return 0;
}