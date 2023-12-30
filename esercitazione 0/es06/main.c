#include <stdio.h> 

unsigned int fattoriale(unsigned char val) {
	if (val == 1) {
		return 1;
	}
	return val * fattoriale(val - 1);

}

int	main(void) {
	

	unsigned int z = fattoriale(4);

	printf("il fattoriale e %d", z);
	
	return 0;

}