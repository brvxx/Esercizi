#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {

	FILE* f = fopen("provaget.txt", "b");
	if (f == NULL) {
		return -1;
	}

	const char s[] = " lisciami le mele"; 

	for (size_t i = 0; i < strlen(s); ++i) {
		fputc(s[i], f);
	}

	fclose(f);

	return 0; 
}