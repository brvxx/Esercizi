#include <stdlib.h>
#include <math.h>

unsigned int inverti(unsigned int i) {
	
	if (i == 0) {
		return 0;
	}

	unsigned int* num = NULL;
	unsigned int cfr = 0; 
	
	while (i > 0) {
		cfr += 1; 
		num = realloc(num, cfr * sizeof(unsigned int));
		num[cfr - 1] = i % 10;
		i /= 10;
	}
	unsigned int exp = cfr - 1;
	unsigned int res = 0; 
	for (size_t i = 0; i < cfr; ++i) {
		res += num[i] * pow(10, exp);
		--exp;
	}
	
	free(num);
	return res;
}