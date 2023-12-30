#include <stdio.h>

unsigned int MCD(unsigned int m, unsigned int n)
{
	if (m == 0 || n == 0) {
		return 0;
	}
	while (m != n) {
		if (m < n) {
			unsigned int t = m;
			m = n;
			n = t;
		}
		m -= n;
	}
	return m;
}

int main(void)
{
	unsigned int m = 15;
	unsigned int n = 6;

	unsigned int mcd = MCD(m, n);

	printf("il numero e: %d", mcd);
	
	return 0;
}


