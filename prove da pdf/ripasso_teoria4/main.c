#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE* f = fopen("prova.txt", "r");
	char niggo[100] = { 0 };
	for (size_t i = 0;; ++i) {
		if ((niggo[i] = fgetc(f)) == EOF) {
			break;
		}
	}

	return 0;
}