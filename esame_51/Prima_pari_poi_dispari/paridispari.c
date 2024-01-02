#include "paridispari.h"

void paridispari(int* v, size_t n) {
	if (v == NULL || n == 0) {
		return;
	}
	size_t j = n - 1;
	int tmp = 0;
	for (size_t i = 0; i < j; i++) {
		if (v[i] % 2 != 0) {
			tmp = v[i];
			while (j > 0) {
				if (v[j] % 2 == 0) {
					v[i] = v[j];
					v[j] = tmp;
					--j;
					break; 
				}
				--j;
			}
		}
	}
}
