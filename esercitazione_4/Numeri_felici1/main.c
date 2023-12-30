#include <stdio.h>

extern int felice(unsigned int num);

int main(void) {


	int res = felice(4294967295);

	printf("il numero e': %s", res == 1 ? "felice" : "infelice");

	return 0;
}