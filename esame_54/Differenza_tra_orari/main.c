#include "orari.h"

int main(void) {

	struct orario A = { 21, 0, 20 };
	struct orario B = { 17, 20, 30 };

	struct orario res = differenza_orari(A, B);

	printf("ore: %d, minuti: %d, secondi: %d", res.ore, res.minuti, res.secondi);

	return 0;
}