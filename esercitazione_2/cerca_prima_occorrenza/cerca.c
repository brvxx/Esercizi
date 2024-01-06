#include "cerca.h"
#include <stdlib.h>

int cerca_primo(const char* s, char c) {

	size_t occorrenza = 0;

	for (size_t i = 0; s[i] != 0; ++i) {
		if (s[i] == c) {
			return occorrenza;
		}
		++occorrenza;
	}
	return -1;
		
}