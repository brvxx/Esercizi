#include <stdio.h>
#include <stdlib.h>

extern void stampa_croce(FILE* f, size_t dim);

int main(void) {

	FILE* f = fopen("prova.txt", "w");

	stampa_croce(f, 3);

	return 0;
}