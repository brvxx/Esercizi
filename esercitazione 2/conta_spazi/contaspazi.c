#include <stdlib.h>

unsigned int conta_spazi(const char* s) {

	size_t spazi = 0;
	for (size_t i = 0; s[i] != 0; ++i) {
		if (s[i] == 32) {
			++spazi;
		}
	}
	return spazi;
}