#include "scrittura.h"

int scrivimaiuscolo(const char* filename) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return 0;
	}
	char c;
	while ((c = fgetc(f)) != EOF) {
		if (islower(c)) {
			c = toupper(c);
		}
		fputc(c, stdout);
	}
	fclose(f);
	return 1; 
}