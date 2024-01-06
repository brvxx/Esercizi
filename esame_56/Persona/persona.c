#include "persona.h"

struct persona* leggi_persone(const char* filename, size_t* size) {
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		*size = 0;
		return NULL;
	}
	size_t persone = 0;

	int nread = fscanf(f, "%zu", &persone);
	if (nread != 1) {
		*size = 0;
		fclose(f);
		return NULL;
	}
	size_t prs_idx = 0;
	struct persona* res = calloc(persone, sizeof(struct persona));

	while (prs_idx < persone) {
		if (fscanf(f, "%d , %[^\n]", &(res[prs_idx].anni), res[prs_idx].nome) != 2){
			*size = 0; 
			free(res);
			fclose(f);
			return NULL;
		}
		++prs_idx;
	}
	*size = persone;
	fclose(f);
	return res;
}