#include <stdio.h>

char massimo(char a, char b) {
	if (a > b) {
		return a;
	}
	return b;
}

int main(void) {
	
	char x = 7;
	char y = 3; 
	char z = massimo(x, y);
	
	printf("il numero e: %d", z);

	return 0;
} 