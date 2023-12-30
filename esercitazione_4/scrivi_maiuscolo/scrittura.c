#include "scrittura.h"

int scrivimaiuscolo(const char* filename){
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return 0;
	}
	char string[200] = { 0 };
	while (fgets(string, sizeof(string), f) != NULL) {
		for (size_t i = 0; string[i] != 0; ++i) {
			if (islower(string[i])) {
				string[i] = toupper(string[i]);
			}
		}
	printf("%s", string);
	}
	fclose(f);
	return 1;
}