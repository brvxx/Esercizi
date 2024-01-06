#include "risiko.h"

int main(void) {

	struct lancio A = { {5,2,3}, 3 };
	struct lancio B = { {6,2,1}, 3 };
	char perse_attacco;
	char perse_difesa;

	confronta_lanci(&A, &B, &perse_attacco, &perse_difesa);

	printf("persi attacco: %d, persi difesa: %d", perse_attacco, perse_difesa);

	return 0;
}