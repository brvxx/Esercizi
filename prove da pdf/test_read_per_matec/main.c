#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE* f = fopen("dati1.bin", "rb");
	int count; 
	int res[13] = { 0 };
	fread(&count, sizeof(int), 1, f);
	fread(res, sizeof(int), 13, f);


	return 0; 
}