#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

extern bool crescente(unsigned int x);

int main(void) {


	bool res = crescente(123);

	printf("il numero dato e' crescente? %s", res ? "si'" : "no");


	return 0;
}