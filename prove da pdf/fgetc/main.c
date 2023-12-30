#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE* f = fopen("C:/Users/Brux/Desktop/prova.txt", "r");

	if (f == NULL) {
		return -1;
	}

	char prova;
	char prova2; 

	while ((prova = (char)fgetc(f)) != EOF) {
		prova2 = prova; 
	}

	fclose(f);


	return 0;
}