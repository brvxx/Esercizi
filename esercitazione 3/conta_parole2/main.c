#include <stdlib.h>

extern size_t conta_parole(const char* s);

int main(void) {

	char stringa[] = " Questa e' una stringa lunga 45 caratteri. ";

	size_t numparole = conta_parole(stringa);


	return 0;
}