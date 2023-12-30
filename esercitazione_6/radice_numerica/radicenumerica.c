#include <stdlib.h>
#include <stdio.h>

unsigned int sommacifre(unsigned int x) {
	
	unsigned int somma = 0;
	while (x > 0) {
		somma += (x % 10);
		x /= 10;
	}
	return somma;
}

int main(int argc, char** argv) {

	if (argc != 2) {
		return 1;
	}
	char* endptr;
	int n = strtol(argv[1], &endptr, 10); 
	if (*endptr != 0 || n < 0) {
		return 1;
	}
	unsigned int sum = sommacifre(n);
	while (sum >= 10) {
		sum = sommacifre(sum);
	}
	printf("%i", sum);

	return 0;
}