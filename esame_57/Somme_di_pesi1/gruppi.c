#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int* read_gruppi(const char* filename, size_t* ngruppi) {
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}
	size_t groups = 0; 
	size_t is_group = true;
	int sum = 0; 
	int* res = NULL; 
	int tmp = 0;
	char buf[256] = { 0 };

	while (fscanf(f, "%d", &tmp) == 1) {
		if (is_group == false) {
			is_group = true;
		}
		sum += tmp; 
		fscanf(f, "%[\n]", buf);
		if (strlen(buf) > 1) {
			groups += 1;
			res = realloc(res, groups * sizeof(int));
			res[groups - 1] = sum;
			sum = 0; 
			is_group = false; 
		}
	}
	if (is_group == true) {
		groups += 1;
		res = realloc(res, groups * sizeof(int));
		res[groups - 1] = sum;
	}
	*ngruppi = groups;
	fclose(f);
	return res;
}
