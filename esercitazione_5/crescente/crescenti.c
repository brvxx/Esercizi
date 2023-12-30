#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


bool crescente(unsigned int x) {

	unsigned int* values = malloc(10 * sizeof(unsigned int));
	unsigned int exp = 9;
	for (size_t i = 0; i < 10; ++i) {
		values[i] = (x / (unsigned int)pow(10, (double)exp)) % 10;
		--exp;
	}
	for (size_t k = 0; k < 9; ++k) {
		
		if (values[k] == values[k + 1] && values[k] == 0) {
			continue;
		}
		if (k != 8 && (values[k] != 0)) {
			if (values[k + 1] != (values[k] + 1)) {
				free(values);
				return false;
			}
		}
	}
	free(values);
	return true; 
}