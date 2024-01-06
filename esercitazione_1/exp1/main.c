#include <stdio.h>

extern double exp(double x);

int main(void) {
	
	double n = 2;
	double res = exp(n);

	printf("exp di %lf vale: %lf", n, res);

	return 0; 
}