#include <stdio.h>
#include <stdlib.h>

extern unsigned int inverti(unsigned int i);

int main(void) {

	unsigned int res = inverti(123);

	printf("l'inverso del numero scelto e': %i", res);

	return EXIT_SUCCESS;
}