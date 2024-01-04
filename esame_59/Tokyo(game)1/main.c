#include <stdio.h>

extern int tokyo_confronta(char a[2], char b[2]);

int main(void) {
	
	char dado1[] = { 3 , 6 };
	char dado2[] = { 5 , 2 };

	int res = tokyo_confronta(dado1, dado2);

	if (res == 0) {
		fputs("pareggio", stdout);
	}
	else if (res == 1) {
		fputs("dado 1 vince", stdout);
	}
	else {
		fputs("dado 2 vince", stdout);
	}

	return 0;
}