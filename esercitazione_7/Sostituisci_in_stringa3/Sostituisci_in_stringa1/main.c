#include <stdio.h>

extern char* sostituisci(const char* str, const char* vecchia, const char* nuova);

int main(void) {
	
	char str[] = "qui cambia la parola cambia e basta";
	char vecchia[] = "cambia";
	char nuova[] = "";

	char* newstr = sostituisci(str, vecchia, nuova);

	printf("%s", newstr);

	return 0;
	
}