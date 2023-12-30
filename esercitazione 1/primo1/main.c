#include <stdio.h>

extern int primo(unsigned int val);

int main(void) {

	int res = primo(4);

	printf("il numero e': %s", res == 0 ? "non primo" : "primo");

	return 0;
}