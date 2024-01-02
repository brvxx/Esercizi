#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

bool is_prime(uint32_t val) {
	if (val == 0 || val == 1) {
		return false; 
	}
	for (size_t i = 2; i * i <= val; ++i) {
		if (val % i == 0) {
			return false; 
		}
	}
	return true;
}

bool primigemelli(uint32_t start, uint32_t* x, uint32_t* y) {
	if (start % 2 == 0) {
		++start;
	}
	bool res = false; 
	uint32_t fst = start; 
	uint32_t scd = 0;  

	while (fst < UINT32_MAX) {
		if (is_prime(fst)) {
			if ((fst - scd) == 2) {
				*x = scd;
				*y = fst;
				res = true;
				break;
			}
			else {
				scd = fst;
			}
		}
		fst += 2;
	}
	return res;
}