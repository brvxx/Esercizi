#include "lettura.h"

int main(void) {

	size_t numbs = 0;
	int* res = leggiinteri2("dati1.bin", &numbs);

	free(res);
	return 0;
}