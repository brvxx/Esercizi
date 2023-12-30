#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {

	FILE* f = fopen("zemen.txt", "r");
	if (f == NULL) {
		return EXIT_FAILURE;
	}
	
	int arr[20];
	size_t n = 0;
	
	while (1) {
		int num;
		int nread = fscanf(f, "%d", &num); //lettura
		
		if (nread != 1) {                  //controllo 
			break;
		}
		arr[n] = num;                     //utilizzo
		++n;
	}

	fclose(f);

	return 0;
}