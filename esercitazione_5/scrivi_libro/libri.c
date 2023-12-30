#include "libri.h"

bool libro_scrivi(const struct libro* p, FILE* f) {

	size_t lentitle = strlen(p->titolo);

	size_t cread = fwrite(p->titolo, 1, lentitle + 1, f);
	if (cread != (lentitle + 1)) {
		return false;
	}

	uint16_t* annata = p->anni_ristampe;
	size_t i = 0;
	for (; annata[i] != 0; ++i) {
		size_t aread = fwrite(&annata[i], sizeof(uint16_t), 1, f);
		if (aread != 1) {
			return false;
		}
	}
	size_t zread = fwrite(&annata[i], sizeof(uint16_t), 1, f);
	if (zread != 1) {
		return false;
	}
	return true;
}