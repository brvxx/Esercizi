#include <stdio.h>

extern char* extract_number(const char* message);

int main(void) {

	char str[] = "quattro sette";

	char* res = extract_number(str);
	printf("il messaggio segreto e': %s", res);

	return 0;
}