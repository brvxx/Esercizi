#include "geometria.h"

int main(void) {

	struct punto a = { 1, 0 };
	struct punto b = { 2, 0 };
	struct punto c = { 3, 0 };

	int ris = colineari(a, b, c); 

	return 0;
}