#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <math.h>


bool scrivi_intero(const char* filename, int i) {

	if (filename == NULL) {
		return false;
	}

	int ai = abs(i);
	
	FILE* file = fopen(filename, "w");
	if (file == NULL) {
		return false;
	}
	
	int cifre[10] = { 0 };
	size_t n = 9; 
	for (size_t c = 0; c < 10 ; ++c) {

		cifre[c] = (ai / (int)pow(10, n)) % 10;
		--n;
	}

	if (i < 0) {
		fputc('-', file);
	}
	for (size_t k = 0; k < 10; ++k) {
		if (cifre[k] == 0) {
			continue;
		}
		fputc('0' + cifre[k], file);
	}

	fclose(file);
	return true; 
}