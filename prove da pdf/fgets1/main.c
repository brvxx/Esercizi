#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	FILE* f = fopen("prova.txt", "r");
	if (!f) {
		return -1;
	}
	int tmp = 0;
	char buf[256] = { 0 };
	int nread = fscanf(f, "%d", &tmp);
	int bread = fscanf(f, "%[\n]", buf);
	size_t len = strlen(buf);



	return 0;
}