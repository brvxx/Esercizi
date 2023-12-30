#include <stdio.h>
#include <string.h>

void stampa_cornicetta(const char* s) {
	
	size_t n = strlen(s);
	fputc('/', stdout);
	for (size_t i = 0; i < n + 2; ++i) {
		fputc('-', stdout);
	}
	fputs("\\\n", stdout);
	
	printf("| %s |\n", s);
	
	fputc('\\', stdout);
	for (size_t i = 0; i < n + 2; ++i) {
		fputc('-', stdout);
	}
	fputs("/\n", stdout);

}