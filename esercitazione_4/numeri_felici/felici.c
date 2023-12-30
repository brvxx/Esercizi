#include <stdlib.h>
#include <math.h>

unsigned int sumpow(unsigned int x) {
	unsigned int somma = 0;
	size_t exp = 9;
	for (size_t i = 0; i < 10; ++i) {
		somma += ((x / (unsigned int)pow(10, exp)) % 10) * ((x / (unsigned int)pow(10, exp)) % 10);
		--exp;
	}
	return somma;
}

int felice(unsigned int num) {
	if (num == 0) {
		return 0;
	}
	unsigned int res = sumpow(num);
	while (1) {
		res = sumpow(res);
		if (res == 1) {
			return 1;
		}
		if (res == 4) {
			return 0;
		}
	}
}