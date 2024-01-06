#include "persona.h"

int main(void) {
	size_t people = 0; 
	struct persona* res = leggi_persone("file3.txt", &people);

	printf("le persone sono: %zu\n\n", people);
	for (size_t i = 0; i < people; ++i) {
		printf("nome e cognme: %s\neta': %d\n\n", res[i].nome, res[i].anni);
	}

	return 0;
}