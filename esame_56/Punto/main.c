#include "punto.h"

int main(void) {

	struct punto_cart p1 = { 1, 2 };
	struct punto_pol pol1 = cartesiano2polare(&p1);

	printf("%f, %f\n", pol1.r, pol1.t);


	return 0;
}