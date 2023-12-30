#include <stdio.h>
#include <stdlib.h>

extern char* trim(const char* s);

int main(void) {

	char stringa[] = "      ";
	char* res = trim(stringa);

	printf("la nuava stringa sara': |%s|", res);

	free(res);
	return 0; 
}