#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char** argv) {

	if (argc != 2) {
		return 1;
	}

	char* endptr;
	int n = strtol(argv[1], &endptr, 10);
	if (*endptr != 0 || n < 0) {
		return 1;
	}

	bool primo = true;
	if (n < 2) {
		primo = false;
		printf("false");
		return 0;
	}
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			primo = false;
			break;
		}
	}
	printf("%s", primo ? "true" : "false");
	return 0;
}