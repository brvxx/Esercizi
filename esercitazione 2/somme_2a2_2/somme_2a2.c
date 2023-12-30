#include <stdlib.h>
#include <stdint.h>



uint32_t* somme_2a2(uint32_t* vett, size_t size) {

	if (vett == NULL) {

		return NULL;
	}
	uint32_t* somma = malloc((size / 2) * sizeof(uint32_t));

	size_t s = 0;
	for (size_t i = 0; i < (size/2); ++i) {
		somma[i] = vett[s] + vett[s + 1];
		s += 2;
	}
	return somma;

}