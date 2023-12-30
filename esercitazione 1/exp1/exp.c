#include <math.h>
#include <stdlib.h>

double fattoriale(unsigned int val) {

	if (val <= 1) {
		return 1;
	}
	return val * fattoriale(val - 1);

}

double exp(double x) {

	double t, a = 0;
	unsigned int i = 0; 
	do {
		t = a; 
		a += pow(x, i) / fattoriale(i);
		++i;
	} while (a != t);

	return a;
}