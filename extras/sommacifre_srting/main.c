#include <stdlib.h>

extern size_t somma_cifre_dec(const char* s);

int main(void) {

	char string[] = "-123.312";

	size_t res = somma_cifre_dec(string);

	return 0; 
}