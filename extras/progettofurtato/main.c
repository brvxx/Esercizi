#include <stdio.h>
#include <stdint.h>

int main(void)
{
	int val = 123;
	int n = 31; 

	uint32_t mask = 1;
	
	printf("il numero in bit e:   ");
	while (n > 0) {
		
		if ((val & mask) == 0) {
			printf("%d", 0);
		}
		else {
			printf("%d", 1);
		}
		
		mask *= 2;
		n--;
	}

	return 0; 
}