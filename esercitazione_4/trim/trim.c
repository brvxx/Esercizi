#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* trim(const char* s) {
	if (s == NULL) {
		return NULL;
	}
	
	size_t len = strlen(s);
	size_t spaces = 0;
	for (size_t i = 0; i < len; ++i) {
		if (s[i] == ' ') {
			++spaces;
		}
	}
	if (spaces == len) {
		char* estring = calloc(1, 1);
		return estring;
	}
	size_t initspaces = 0;
	size_t finalspaces = 0;
	for (size_t i = 0; s[i] == ' '; ++i) {
		++initspaces;
	}
	for (size_t k = len - 1; s[k] == ' '; --k) {
		++finalspaces;
	}

	size_t newlen = len - (initspaces + finalspaces);
	char* string = calloc( newlen + 1 , sizeof(char));
	char* string1 = strncpy(string, &s[initspaces], newlen);

	return string1;
}