#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
	errno = 0;
	char* endptr;
	double x;
	/*x = strtod("1.3e123456", &endptr);
	if (*endptr != 0) {
		return EXIT_FAILURE;
	}*/
	x = -12;
	double res = sqrt(x);
	if (errno != 0) {
		printf("%s", strerror(errno));
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}