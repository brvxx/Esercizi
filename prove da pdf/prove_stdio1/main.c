#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE* f = fopen("zezzo.txt", "wb");
	if (f == NULL) {
		return EXIT_FAILURE;
	}
	int palle = 245;
	char spalle[20];
	int written = snprintf(spalle,sizeof spalle, "nella stanza ci sono %d palle", palle);
	
	fputs(spalle, f);
	
	fclose(f);
	return EXIT_SUCCESS;
}