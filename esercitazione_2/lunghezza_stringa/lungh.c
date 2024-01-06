#include <stdlib.h>

size_t lungh(const char* str) {
	
	size_t caratt = 0;
	for (size_t i = 0; str[i] != 0; ++i) {
		++caratt;
	}
	return caratt; 
}