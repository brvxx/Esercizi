#include "rational.h"

struct rational* rational_read(const char* filename, size_t* size) {
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		*size = 0;
		return NULL;
	}

	struct rational* res = NULL;
	int N = 0; 
	unsigned int D = 0;
	size_t fractions = 0; 

	while (fscanf(f, "%d / %u", &N, &D) == 2) {
		++fractions;
		res = realloc(res, fractions * sizeof(struct rational));
		res[fractions - 1].den = D; 
		res[fractions - 1].num = N;
	}
	*size = fractions;
	fclose(f);
	return res;
}