#include <stdlib.h>

size_t lungh(const char* str) {

	size_t caratt = 0;
	for (size_t i = 0; str[i] != 0; ++i) {
		++caratt;
	}
	return caratt;
}

char* concatena(const char* prima, const char* seconda) {
	
	size_t n1;
	size_t n2; 
	
	if (prima == NULL && seconda == NULL) {
		n1 = 0;
		n2 = 0; 
	}
	else if (prima == NULL) {
		n1 = 0;
		n2 = lungh(seconda);
		}
	else if (seconda == NULL) {
			n2 = 0;
			n1 = lungh(prima);
	}
	else {
		n1 = lungh(prima);
		n2 = lungh(seconda);
	}

	char* ris = calloc(n1 + n2 + 1, 1);

	for (size_t i = 0; i < n1; ++i) {
		ris[i] = prima[i];
	}
	for (size_t i = 0; i < n2; ++i) {
		ris[n1 + i] = seconda[i];
	}
	return ris;
}