#include <stdio.h>
#include <stdlib.h>

int ismultiple(int a, int b)  
{
	return a > b ? (b != 0 && a % b == 0) : (a != 0 && b % a == 0);
}

int main(void)
{
	int x = 72;
	int y = 9;

	int z = ismultiple(y, x);

	printf("sono moolteeplee: %d", ismultiple(y, x));

	return EXIT_SUCCESS;
}