#define DELTA 10E-200
#include <stdio.h> 
#include <math.h>

double fattoriale(unsigned int val) {

	if (val <= 1) {
		return 1;
	}
	return val * fattoriale(val - 1);

}
//
//double pow(double x, unsigned int n) {
//
//	double pot = 1;
//
//	for (int i = 0; i < n; i++) {
//		pot *= x;
//	}
//	return pot;
//}
//double abs(double x) {
//	if (x >= 0) {
//		return x;
//	}
//	return -x; 
//}
double exp(double x) {

	if (x == 0) {
		return 1;
	}

	double previous = 0;
	double result = 0; 

	for (int n = 0; n < 150; n++) {
		result += pow(x, n) / fattoriale(n);
		if (fabs(previous - result) < -1) {
			printf("n vale: %d, il risultato e: %lf", n, result);
			break; 
		}
		previous = result; 
	}
	printf("\n il risultato e: %lf", result);
	return result;

}