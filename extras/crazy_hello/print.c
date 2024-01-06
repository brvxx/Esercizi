#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* crazyprint(char* str) {
	size_t len = strlen(str);
	char* res = calloc(len + 1, sizeof(char));

	for (size_t i = 0; i < len; ++i) {
		if (strcmp(res, str) == 0) {
			break;
		}
		for (char letter = ' '; letter < '}'; ++letter) {
			res[i] = letter;
			printf("%s\n", res);
			if (res[i] == str[i]) {
				break;
			}
		Sleep(1);
		}
	}
	return res;
}