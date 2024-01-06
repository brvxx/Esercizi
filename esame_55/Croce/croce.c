#include <stdio.h>
#include <stdlib.h>

void stampa_c(char c, size_t times, FILE* stream) {
	for (size_t i = 0; i < times; ++i) {
		fputc(c, stream);
	}
}

void stampa_croce(FILE* f, size_t dim) {
	
	//parte superiore
	size_t size = dim;
	for (size_t i = 0; i <= dim; ++i) {
		stampa_c(' ', i, f);
		fputc('\\', f);
		stampa_c(' ', 2 * size, f);
		fputs("/\n", f);
		--size;
	}

	//parte inferiore
	size = dim;
	for (size_t i = 0; i <= dim; ++i) {
		stampa_c(' ', size, f);
		fputc('/', f);
		stampa_c(' ', 2 * i, f);
		fputs("\\\n", f);
		--size;
	}
}
