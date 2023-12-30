#include "persona.h"

int main(void) {


	size_t numpers = 0;
	struct persona* list = leggi_persone("file1.txt", &numpers);
	
	printf("ho letto %zu persone\n", numpers);
	for (size_t k = 0; k < numpers; ++k) {
		printf("la persona ha %d anni e si chiama %s\n", list[k].anni, list[k].nome);
	}

	return 0;
}