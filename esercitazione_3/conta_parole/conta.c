#include <stdlib.h>


size_t conta_parole(const char* s) {
	size_t words = 0;

	int is_word = 0;

	for (size_t i = 0; s[i] != 0; ++i) {
		if (s[i] == ' ') {
			is_word = 0;
		}
		
		if (s[i] != ' ' && is_word == 0) {
			++words;
			is_word = 1;
		}

	}
	
	return words;
}