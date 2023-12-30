#include <ctype.h>
#include <stdlib.h>


extern size_t somma_cifre_dec(const char* s) {

	if (s == NULL) {
		return -1;
	}
	size_t somma = 0;
	for (size_t i = 0; s[i] != 0; ++i) {
		if (isdigit(s[i])) {
			somma += s[i] - '0';
		}
	}
	return somma;
}