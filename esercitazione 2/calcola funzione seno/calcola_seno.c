#include <stdlib.h>
#include <math.h>

double fattoriale(unsigned int n)
{
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * fattoriale(n - 1);
}

double calcola_seno(double x) {

	double previous = 0;
	double result = 0;
	size_t i = 0;
	
	do {
		previous = result;
		result += (pow(-1, i)) / fattoriale((2 * i) + 1) * pow(x, ((2 * i) + 1));
		++i;
	} while (previous != result);
	return result;
}