#include <stdlib.h>

extern size_t conta_parole(const char* s);

int main(void) {

	char str[] = "questa � una stringa di prova";

	size_t res = conta_parole(str);

	return 0; 
}