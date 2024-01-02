#include <stdio.h>

#define VAL 7
int x = VAL;

#if !defined VAL
x += VAL;
#endif 

int main(void) {
	printf("%d", x);
	return 0;
}