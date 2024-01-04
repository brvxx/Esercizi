#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	if (argc != 2) {
		return 1; 
	}
	char* endptr;
	int num = strtol(argv[1], &endptr, 0);
	if (*endptr != 0 || num <= 0) {
		return 1;
	}

	int i = 1;
	while (i <= num) {
		if ((i % 3 == 0) && (i % 5 != 0)) {
			fputs("Fizz\n", stdout);
		}
		else if ((i % 5 == 0) && (i % 3 != 0)) {
			fputs("Buzz\n", stdout);
		}
		else if ((i % 3 == 0) && (i % 5 == 0)) {
			fputs("Fizzbuzz\n", stdout);
		}
		else {
			printf("%d\n", i);
		}
		++i;
	}
	return 0;
}