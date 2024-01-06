#include <stdlib.h>

extern void encrypt(char* s, unsigned int n);

int main(void) {

	char a[] = { 2, 3 };
	unsigned int n = 2;
	
	encrypt(a, n);


	return 0; 
}