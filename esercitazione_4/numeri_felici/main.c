#include <stdio.h>

extern int felice(unsigned int num);

int main(void) {
	
	unsigned int n = 8;
	int hp = felice(n);

	if (hp == 0) {
		printf("%d e' un numero infelice :((((", n);
	}
	else {
		printf("%d e' un numero mega felice :))))))", n);
	}

	return 0; 
}