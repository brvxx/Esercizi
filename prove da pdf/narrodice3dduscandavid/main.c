#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* f = fopen("3ddu.txt", "r");
	
	if (f == NULL) {
		return -1;
	}
	int i1 = 0;
	int i2 = 0;
	int i3 = 0;
	float terraterra = 0;
	int eddu = 0;
	char s[20] = {0};

	int ret = fscanf(f, "%d%19s%x%f%d%d", &eddu, s, &i1, &terraterra, &i2, &i3); 

	printf("eddu vale %d, mentre la stringa contiene %s, poi c'e %x %f %d %d", eddu, s, i1, terraterra, i2, i3);

	fclose(f);

	return 0; 
}