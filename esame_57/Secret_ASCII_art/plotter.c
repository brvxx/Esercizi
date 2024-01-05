#include <stdio.h>
#include <stdlib.h>

void printchar(char c, int val) {
	for (int i = 0; i < val; ++i) {
		fputc(c, stdout);
	}
}

void plotter(const char* p) {
	if (p == NULL) {
		return;
	}
	size_t i = 0; 
	while (p[i] != 0) {
		if (p[i] < 0) {
			printchar(p[i + 1], abs((int)p[i]));
			i += 2;
		}
		else {
			fputc(p[i], stdout);
			++i;
		}
	}
}