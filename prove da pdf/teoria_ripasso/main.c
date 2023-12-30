#define SPAZIO_EXTRA +20
#include <stdio.h>
#include <stdbool.h>

int x; 

int main(void) {

	int a = 30 SPAZIO_EXTRA;

	int arr[12] = { };
	size_t waaaat = sizeof arr;
	size_t dimarr = sizeof(arr) / sizeof(*arr);

	bool boo = 32142; 
	/*int* ptr = &a;
	*ptr *= 2;*/
	
	printf("a vale %d", a);

	


	return 0; 
}