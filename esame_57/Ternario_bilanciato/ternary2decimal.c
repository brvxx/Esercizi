#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char** argv) {
	if (argc != 2) {
		return 1; 
	}

	int sum = 0; 
	size_t i = 0;
	size_t len = strlen(argv[1]) - 1;
	while ((argv[1])[i] != 0) {
		if ((argv[1])[i] != '+' && (argv[1])[i] != '0' && (argv[1])[i] != '-') {
			return 1;
		}
		if ((argv[1])[i] == '+') {
			sum += (int)pow(3, (double)len);
		}
		else if ((argv[1])[i] == '-') {
			sum += -(int)pow(3, (double)len);
		}
		else {
			sum += 0;
		}

		++i;
		--len;
	}
	printf("%d\n", sum);
	return 0;
}