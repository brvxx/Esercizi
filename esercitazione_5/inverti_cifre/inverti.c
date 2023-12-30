#include <stdlib.h>
#include <math.h>


unsigned int inverti(unsigned int i) {

	char* values = calloc(1, sizeof(unsigned int));
	
	size_t k = 0;
	while (i > 0) {
		values[k] = i % 10;
		values = realloc(values, (k + 1) * sizeof(unsigned int));
		i /= 10;
		k++;
	}
	
	unsigned int inum = 0;
	size_t exp = k;
	for (size_t c = 0; c < k; ++c) {
		inum += values[c] * pow(10, exp - 1);
		--exp;
	}
	
	free(values);
	return inum;
}