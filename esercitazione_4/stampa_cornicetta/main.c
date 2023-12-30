#include <stdio.h>
#include <stdlib.h>

extern void stampa_cornicetta(const char* s);

int main(void) {
	
	char str[] = "ciao zemen";

	stampa_cornicetta(str);

	return 0;
}