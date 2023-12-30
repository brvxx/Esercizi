#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {

	if (argc != 2) {
		return 1;
	}
	size_t n = strlen(argv[1]);
	char* stringa = calloc(n + 1, 1);
	strcpy(stringa, argv[1]);
	char* tmp = calloc(n + 1, 1);
	strcpy(tmp, argv[1]);

	size_t len = n - 1;
	for (size_t i = 0; i < n; ++i) {
		stringa[i] = tmp[len];
		--len;
	}
	printf("%s", stringa);

	free(tmp);
	free(stringa);
	return 0;
}