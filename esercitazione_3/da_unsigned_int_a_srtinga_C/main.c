#include <stdlib.h>

extern char* converti(unsigned int n);

int main(void) {

	unsigned int n = 4234;
	
	char* ris = converti(n);
	
	free(ris);
	
	return 0;
}