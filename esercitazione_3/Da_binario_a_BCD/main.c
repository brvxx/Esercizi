#include "bcd.h"
#include <stdio.h>


int main(void) {

	unsigned short ris = bin2bcd(12344);

	printf("%x", ris);


	return 0;
}