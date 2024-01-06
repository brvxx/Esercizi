#include <stdio.h>

double square_dist(double x1, double y1, double x2, double y2)
{
	return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main(void)
{
	double ris = square_dist(1, 0, 4, 4);

	printf("la distanza e: %lf", square_dist(1, 0, 4, 4));

	return 0;
}