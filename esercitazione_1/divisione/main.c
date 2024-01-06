extern int divisione(double a, double b, double* q);

int main(void) {

	double a = 45;
	double b = 3;
	double ris; 

	int output = divisione(a, b, &ris);

	return 0;
}