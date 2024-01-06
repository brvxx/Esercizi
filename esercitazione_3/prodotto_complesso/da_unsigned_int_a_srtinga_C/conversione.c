#include <stdlib.h>
#include <math.h>


size_t contacifre(unsigned int n) {

	unsigned int result = n;
	size_t somma = 0;
	if (result == 0) {
		return 1;
	}
	for (size_t i = 0; result != 0; ++i) {
			result /= 10; 
			++somma;
	}
	return somma; 

}

char* converti(unsigned int n) {

	size_t n1 = contacifre(n);

	char* p = calloc(n1 + 1, 1);

	for (size_t i = n1; i > 0; --i) {
		p[i - 1] = ((n / (unsigned int)(pow(10, i - 1)) % 10) + 48);
	}
	return p;
}