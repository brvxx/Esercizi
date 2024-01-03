#include <stdlib.h>
#include <string.h>
#include <stdint.h>

const void* memmem(const void* pagliaio, size_t psize, const void* ago, size_t asize) {
	if (pagliaio == NULL || psize == 0 || ago == NULL || asize == 0 || asize > psize) {
		return NULL;
	}
	size_t pgl_i = 0;
	size_t ago_i = 0; 
	while (pgl_i < psize) {
		if (((uint8_t*)pagliaio)[pgl_i] == ((uint8_t*)ago)[ago_i]) {
			size_t tmp_i = pgl_i;
			while (ago_i < asize && ((uint8_t*)pagliaio)[tmp_i] == ((uint8_t*)ago)[ago_i]) {
				
				++ago_i;
				++tmp_i;
			}
			if (ago_i == asize) {
				return &((uint8_t*)pagliaio)[pgl_i];
			}

			ago_i = 0;
		}
		++pgl_i;
	}
	return NULL;
}