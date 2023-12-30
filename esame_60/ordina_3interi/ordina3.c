#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

	if (argc != 4) {
		return 1;
	}
	int res[3] = { 0 };
	char* endptr; 
	size_t maxpos;

	for (size_t i = 0; i < 3; ++i) {
		res[i] = strtol(argv[i + 1], &endptr, 10);
		if (*endptr != 0) {
			return 1;
		}
	}
	
	for (size_t k = 0; k < 2; ++k) {
		maxpos = k; 
		for (size_t j = k + 1; j < 3; ++j) {
			if (res[j] > res[maxpos]) {
				maxpos = j;
			}
		}
		int tmp = res[k]; 
		res[k] = res[maxpos]; 
		res[maxpos] = tmp;
	}
	for (size_t l = 0; l < 3; ++l) {
		if (l == 2) {
			printf("%d\n", res[l]);
			break;
		}
		printf("%d ", res[l]);
	}


	return 0;
}