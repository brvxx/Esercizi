#include "palindroma.h"

bool palindroma(const char* str) {
	if (str == NULL || strlen(str) == 0) {
		return false;
	}
	size_t len = strlen(str) - 1;

	for (size_t i = 0; i < strlen(str) / 2; ++i) {
		if (str[i] != str[len]) {
			return false;
		}
		--len;
	}

	return true;
}
