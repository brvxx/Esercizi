#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int val) {
	if (val == 0 || val == 1) {
		return false;
	}
	for (int i = 2; i * i <= val; ++i) {
		if (val % i == 0) {
			return false;
		}
	}
	return true;
}

int main(int argc, char** argv) {
	if (argc != 2) {
		return 1;
	}
	char* endptr;
	int num = strtol(argv[1], &endptr, 0);
	if (*endptr != 0 || num <= 0) {
		return 1;
	}
	for (int i = 0; i < num; ++i) {
		if (is_prime(i)) {
			printf("%d ", i);
		}
	}
	fputc('\n', stdout);
	return 0;
}