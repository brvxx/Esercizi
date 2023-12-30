#define _CRT_SECURE_NO_WARNINGS
#include <errno.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void) {
	
	errno = 0; 

	double res = sqrt(-1); 
	
	if (errno != 0) {
		char* str = strerror(errno);
		printf("la funzione ha generato l'errrore %s", str);
		return EXIT_FAILURE;
	}

	printf("la funzione sqrt ha calcolato la radice e questa vale: %f", res);

	return 0;
}