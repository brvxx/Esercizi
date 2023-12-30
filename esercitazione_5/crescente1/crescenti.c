#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


bool crescente(unsigned int x) {

	unsigned int* values = malloc(sizeof(unsigned int));
	size_t i = 0;

	if (x == 0) {
		free(values);
		return true;
	}

	while(x>0){
		values = realloc(values, (i+1)*sizeof(unsigned int));
		values[i] = x % 10;
		x /= 10;
		++i;
	}
	for (size_t k = i; k > 1; --k) {
		if (values[k - 1] != (values[k - 2] - 1)) {
			free(values);
			return false;
		}
	}
	free(values);
	return true;
}