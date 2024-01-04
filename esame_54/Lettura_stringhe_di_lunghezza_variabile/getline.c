#include "getline.h"

size_t getline(char** lineptr, size_t* n, FILE* stream) {
	if (*lineptr == NULL || *n < 16) {
		*lineptr = realloc(*lineptr, 16 * sizeof(char));
		*n = 16;
	}
	size_t dim = *n;
	size_t cread = 0; 
	char c = 0;
	
	while (1) {
		c = fgetc(stream);
		if (c == EOF) {
			break;
		}
		
		++cread; 
		if (dim <= cread) {
			*lineptr = realloc(*lineptr, (dim * 2) * sizeof(char));
			*n *= 2; 
			dim *= 2;
			(*lineptr)[cread - 1] = c;
		}
		else {
			(*lineptr)[cread - 1] = c;
		}
		
		if (c == '\n') {
			break;
		}
	}
		
	(*lineptr)[cread] = 0;
	
	return cread;
}