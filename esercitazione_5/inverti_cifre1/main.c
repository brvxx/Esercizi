#include <stdio.h>

extern unsigned int inverti(unsigned int i);

int main(void) {

	unsigned int res = inverti(1234);

	printf("%d", res);

	return 0;
}