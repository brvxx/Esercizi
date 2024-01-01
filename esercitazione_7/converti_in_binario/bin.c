#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

	if (argc != 2) {
		return 1;
	}
	
	char* endptr;
	int num = strtol(argv[1], &endptr, 10);
	
	if (*endptr != 0 || num < 0) {
		return 1;
	}
	if (num == 0) {
		fputc('0', stdout);
		return 0;
	}
	
	int* vec = NULL;
	size_t num_idx = 0;
	
	while (num > 0) {
		num_idx += 1; 
		vec = realloc(vec, num_idx * sizeof(int));
		vec[num_idx - 1] = num % 2; 
		num /= 2; 
	}
	
	while (num_idx > 0) {
		printf("%d", vec[num_idx - 1]);
		--num_idx;
	}
	
	return 0;
}