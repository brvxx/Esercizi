extern int soluzioni(double a, double b, double c, double* x1, double* x2);

int main(void) {

	double a = 1;
	double b = 3;
	double c = 1;
	double sol1, sol2; 

	int output = soluzioni(a, b, c, &sol1, &sol2);

	return 0;
}