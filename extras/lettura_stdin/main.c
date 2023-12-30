#include <stdio.h>
#include <stdlib.h>

int main(void) {

	while (1) {
		int c = fgetc(stdin);
		if (c == EOF) {
			fputs("-1\n", stdout);
			break;
		}
		int* p = calloc(1, sizeof(int));
		size_t i = 0; 
		while(c > 0){
			p = realloc(p, (i + 1) * sizeof(int));
			p[i] = c % 10;
			c /= 10;
			++i;
		}
		for (size_t k = i; k > 0; --k) {
			fputc(p[k - 1] + '0', stdout);
		}
		fputc('\n', stdout);
	}
	return 0;
}