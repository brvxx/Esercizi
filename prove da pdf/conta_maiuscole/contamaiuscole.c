#include <stdlib.h>
#include <ctype.h>

extern int cerca_maiuscola(const char* s) {

	int loc = -1; 
	for (size_t i = 0; s[i] != 0; ++i) {
		if (s[i] == '.' && isupper(s[i + 1])) {
			loc = i + 1; 
			break;
		}
	}
	return loc;
}