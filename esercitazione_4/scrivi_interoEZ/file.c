#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>

bool scrivi_intero(const char* filename, int i) {

	if (filename == NULL) {
		return false;
	}

	FILE* file = fopen(filename, "w");
	if (file == NULL) {
		return false;
	}

	fprintf(file, "%d", i);
	
	fclose(file);
	return true;
}