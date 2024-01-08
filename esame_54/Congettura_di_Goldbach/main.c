#include <stdint.h>
#include <stdbool.h>
#include <stdio.h> 

extern bool goldbach(uint32_t n, uint32_t* p1, uint32_t* p2);

int main(void) {

	uint32_t n1 = 0; 
	uint32_t n2 = 0; 
	uint32_t n = 100;

	bool res = goldbach(n, &n1, &n2);

	printf("%s %u\n", res ? "esistono due numeri primi che sommati diano:" : "non esistono due numeri primi che sommati diano:", n);
	if (res) {
		printf("e sono %u, %u", n1, n2);
	}


	return 0;
}