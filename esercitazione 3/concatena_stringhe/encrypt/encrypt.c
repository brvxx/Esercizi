#include <stdlib.h>

void encrypt(char* s, unsigned int n) {

	for (size_t i = 0; i < n; ++i) {
		s[i] ^= 170;
	}
}