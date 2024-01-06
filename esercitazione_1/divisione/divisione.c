int divisione(double a, double b, double* q) {

	if (b == 0) {
		return 0;
	}
	else {
		*q = a / b;
		return 1;
	}
}