#include "demography.h"

int main(void) {
	uint32_t cities = 0;
	
	struct city* res = read_cities("cities03.bin", &cities);
	
	printf("in totale le citta' sono: %d\n\n", cities);
	for (size_t i = 0; i < cities; ++i) {
		printf("citta': %s\nabitanti: %d\n\n", res[i].name, res[i].population);
	}

	return 0;
}