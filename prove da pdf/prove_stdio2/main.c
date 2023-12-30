#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE* f = fopen("zezzo.txt", "wb");
	if (f == NULL) {
		return EXIT_FAILURE;
	}
	int palle = 245;
	int needed = snprintf(NULL, 0, "nella stanza ci sono %d palle", palle); //così facendo ottengo la lunghezza della stringa 
																			// poichè è quello che mi ritorna snprintf 

	char* spalle = malloc(needed + 1);  //+1 perchè necessito di spazio anche per il terminatore
	int written = snprintf(spalle, needed + 1, "nella stanza ci sono %d palle", palle);

	fputs(spalle, f);

	fclose(f);
	return EXIT_SUCCESS;
}