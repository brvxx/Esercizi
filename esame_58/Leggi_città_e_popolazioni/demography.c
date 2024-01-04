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
			/*if ((tmp < 'A' || tmp > 'z' || (tmp > 'Z' && tmp < 'a')) && (tmp != ' ' && tmp != -61)) {
				free(res);
				fclose(f);
				return NULL;
			}*/
			(res[struct_idx].name)[word_idx] = tmp;
			++word_idx;
		}
		/*printf("%s\n", res[struct_idx].name);*/
		fread(&(res[struct_idx].population), 1, sizeof(uint32_t), f);
		word_idx = 0;
	}

	*n = cities;
	fclose(f);
	return res;
}