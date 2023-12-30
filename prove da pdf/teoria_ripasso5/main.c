#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE* file = fopen("prova.txt", "r");
	if (file == NULL) {
		return EXIT_FAILURE;
	}

	int i1, i2, i3, h1;
	float f; 
	double d;
	char str[20];
	char stro[20];
	
	
	int res = fscanf(file, " %s%s",str, stro);
	/*printf("%d %d",i1, h1);*/
	
	return 0;
}