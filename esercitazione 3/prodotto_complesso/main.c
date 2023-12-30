#include"complessi.h"

int main(void) {

	struct complesso co1 = { 1, 2 };
	struct complesso co2 = { 2, 2 };

	prodotto_complesso(&co1, &co2);

	return 0;
}