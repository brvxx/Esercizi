#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

	int sum = 0;
	for (int i = 1; i < argc; ++i) {
		char* endptr;
		int num = strtol(argv[i], &endptr, 10);
		if (*endptr != 0) {
			continue;
		}
		sum += num;
	}
	printf("%d\n", sum);

	return 0;
}