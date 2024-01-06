#include "palindroma.h"

int main(void) {
	char str[] = "a";
	bool res = palindroma(str);

	printf("la stringa e': %s", res ? "palindroma" : "non palindroma");

	return 0;
}