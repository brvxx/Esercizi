#include "punti_in_cerchio.h"

int main(void) {
	
	struct punto test[] = { {5,1} , {4,3.7} , {6,3} };
	size_t count = 0;
	
	struct punto* res = punti_in_cerchio(test, 3, 6.0, &count);

	printf("i numeri all'interno del cerchio sono: %zu\n", count);
	
	for (size_t i = 0; i < count; ++i) {
		printf("x = %lf, y = %lf\n", res[i].x, res[i].y);
	}

	return 0; 
}