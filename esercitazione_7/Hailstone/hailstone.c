#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

	if (argc != 2) {
		return -1; 
	}
	char* endptr;
	int num = strtol(argv[1], &endptr, 10);
	if (*endptr != 0 || num <= 0) {
		return 0;
	}
	if (num == 1) {
		fputc('1', stdout);
	}
	else {
		printf("%d, ", num);
	}
	size_t qty = 1;
	
	while (num != 1) {
		if (num % 2 == 0) {
			num /= 2;
			if (num == 1) {
				fputc('1', stdout);
			}
			else{
				printf("%d, ", num);
			}
		}
		else {
			num = 3 * num + 1;
			if (num == 1) {
				fputc('1', stdout);
			}
			else {
				printf("%d, ", num);
			}
		}
		++qty;
	}
	return qty;
}