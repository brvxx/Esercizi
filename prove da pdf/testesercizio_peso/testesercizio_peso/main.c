#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE* f = fopen("prova.txt", "r");
	int tmp = 0; 
	char buf[256] = { 0 };
	fscanf(f, "%d", &tmp);
	fscanf(f, "%[\n]", buf);
	fscanf(f, "%d", &tmp);
	fscanf(f, "%[\n]", buf);


	return 0; 
}