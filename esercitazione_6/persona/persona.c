#include "persona.h"

struct persona* leggi_persone(const char* filename, size_t* size) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		*size = 0;
		return NULL;
	}

	int totperson = 0;
	if ((fscanf(f, "%i", &totperson) != 1) || totperson == 0) {
		fclose(f);
		*size = 0;
		return NULL;
	}

	struct persona* prs = malloc(totperson * sizeof(struct persona));

	for (int i = 0; i < totperson; ++i) {
		if (fscanf(f, "%d , %49[^\n]", &prs[i].anni, prs[i].nome) != 2) {
			fclose(f);
			*size = 0;
			free(prs);
			return NULL;
		}
	}
	*size = totperson;
	fclose(f);
	return prs;
}
