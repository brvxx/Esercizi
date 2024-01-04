#include <stdio.h>
#include <stdlib.h>

extern void translate(char* str, const char* from, const char* to);

int main(void) {

	char str[] = "ciao marco";
	char from[] = "abdc";
	char to[] = "wxzy";

	translate(str, from, to);

	printf("la stringa tradotta e': %s", str);

	return 0;
}