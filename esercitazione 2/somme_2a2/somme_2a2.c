#include <stdlib.h>
#include <stdint.h>



uint32_t* somme_2a2(uint32_t* vett, size_t size) {

	if (vett == NULL) {

		return NULL;
	}
	uint32_t* somma = malloc((size / 2) * sizeof(uint32_t));
		
	for (size_t i = 0; i < (size % 2 == 0 ? size : size - 1); i += 2) {
		somma[i/2] = vett[i] + vett[i + 1]; 
	}
	return somma;

}