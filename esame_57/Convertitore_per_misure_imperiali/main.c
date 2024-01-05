#include "imperial.h"

int main(void) {

	char str[] = "26 miles 385 yards";
	double res = to_meter(str);

	printf("%.4f meters", res);


	return 0; 
}