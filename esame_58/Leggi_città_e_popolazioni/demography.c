#include "demography.h"

struct city* read_cities(const char* filename, uint32_t* n) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}
	uint32_t cities = 0;
	size_t nread = fread(&cities, sizeof(int), 1, f);
	if (nread != 1) {
		return NULL;
	}
	
	struct city* res = calloc(cities, sizeof(struct city));
	char tmp = 0;
	size_t word_idx = 0;

	for (size_t struct_idx = 0; struct_idx < cities; ++struct_idx) {
		res[struct_idx].name = calloc(256, sizeof(char));
		
		while (fread(&tmp, 1, 1, f)) {
			if (tmp == 0) {
				break;
			}
			if (word_idx > 255) {
				break;
			}
			(res[struct_idx].name)[word_idx] = tmp;
			++word_idx;
		}
		if (tmp != 0) {
			for (size_t i = 0; i <= struct_idx; ++i) {
				free(res[i].name);
			}
			free(res);
			fclose(f);
			return NULL; 
		}
		fread(&(res[struct_idx].population), 1, sizeof(uint32_t), f);
		word_idx = 0;
	}

	*n = cities;
	fclose(f);
	return res;
}