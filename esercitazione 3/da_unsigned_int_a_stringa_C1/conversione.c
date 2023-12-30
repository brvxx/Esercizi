#include <stdlib.h>

char* converti(unsigned int n) {

	size_t i = 0;
	char* tmp = NULL; 
	
	while (n > 0) {
		++i; 
		tmp = realloc(tmp, i * sizeof(char));
		tmp[i - 1] = n % 10 + '0';
		n /= 10;
	}
	char* p = calloc(i + 1, sizeof(char));
	for (size_t j = 0; j < i; ++j) {
		p[j] = tmp[i - j - 1];
	}

	free(tmp);
	return p; 
}