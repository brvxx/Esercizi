#include <stdio.h>
#include <stdint.h> 

#define VAL 10 + 10
int x = VAL * 2;

#if !defined VAL
x += VAL;
#endif 

int main(void) {
	
	char* ptr = NULL;
	uint64_t res = sizeof(ptr);
	printf("%d", x);
	return 0;
}