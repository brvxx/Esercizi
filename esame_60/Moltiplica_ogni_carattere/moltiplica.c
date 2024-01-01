#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char* moltiplica_caratteri(const char* s, int n) {
	if (s == NULL || n <= 0) {
		return NULL;
	}
	size_t len_s = strlen(s);

	if (n == 1) {
		char* res = calloc(len_s + 1, sizeof(char));
		return strncpy(res, s, len_s);
	}

	char* res = calloc(len_s * n + 1, sizeof(char));

	for (size_t i = 0; i < len_s; ++i) {
		for (int j = 0; j < n; ++j) {
			res[i * n + j] = s[i];
		}
	}
	return res;
}