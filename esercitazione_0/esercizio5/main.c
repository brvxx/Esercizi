#include <stdint.h>
#include <stdio.h>
unsigned char bit_n(unsigned int val, unsigned char n)
{
	uint32_t mask = 1;
	while (n > 0) {
		mask *= 2;
			n--;
	}
	if ((mask & val) == 0) {
		return 0;
	}
	return 1;
}
int main(void)
{
	unsigned int val = 123;
	unsigned char n = 4;

	unsigned char ris = bit_n(val, n);

	printf("il bit vale: %d", ris);

	return 0;
}