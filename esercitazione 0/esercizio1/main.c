#include <stdio.h>

char massimo(char a, char b)
{
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}

int main(void)
{
	char x = 41;
	char y = 22;

	char z = massimo(x, y);

	printf("il numero e: %d", z);

	return 0; 

}