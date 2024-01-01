#include <stdio.h>

extern char* moltiplica_caratteri(const char* s, int n);


int main(void) {

	char str[] = "ciao";
	char* res = moltiplica_caratteri(str, 3);

	printf("%s", res);


	return 0; 
}