#include <stdlib.h>
#include <string.h>

void translate(char* str, const char* from, const char* to) {
	if (str == NULL || from == NULL || to == NULL || (strlen(from) != strlen(to))) {
		return;
	}
	size_t str_idx = 0; 
	while (str[str_idx] != 0) {
		for (size_t i = 0; i < strlen(from); ++i) {
			if (str[str_idx] == from[i]) {
				str[str_idx] = to[i];
				break;
			}
		}
		++str_idx;
	}
}