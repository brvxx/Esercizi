#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

extern void capsula(FILE* f, unsigned char n);

int main(void) {


	FILE* f = fopen("prova.txt", "w");

	capsula(f, 5);

	return 0;
}