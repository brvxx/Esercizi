#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char* p = calloc(40, sizeof(char)); 
	char string[40];

	FILE* f = fopen("C:\\Users\\Brux\\Desktop\\prova.txt", "r");
	if (f == NULL) {
		return -1; 
	}
	char* v = fgets(p, 30, f);

	for (size_t i = 0; p[i] != 0; ++i) {
		string[i] = p[i];

	}

	fclose(f);
	return 0;
}