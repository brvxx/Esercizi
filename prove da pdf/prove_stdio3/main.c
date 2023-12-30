#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {

	FILE* f = fopen("cazzomila.txt", "wb");
	if (f == NULL) {
		return EXIT_FAILURE;
	}
	uint32_t palle = 345; 
	const char* stringa = "siluri";

	fprintf(f, "nella stanza ci sono %o palle e %s.", palle, stringa); 
	

	return 0; 
}