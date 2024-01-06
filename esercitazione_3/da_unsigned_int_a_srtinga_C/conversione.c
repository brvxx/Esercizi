#include <stdlib.h>

unsigned int power(unsigned int x, unsigned int n) {

	unsigned int pot = 1;

	for (int i = 0; i < n; i++) {
		pot *= x;
	}
	return pot;
}

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

	unsigned int exp = n1 - 1;
	
	for (size_t i = 0; i < n1; ++i) {
		
		p[i] = ((n / power(10, exp)) % 10) + 48;
		--exp;
	}
	return p;
}