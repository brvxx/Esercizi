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
	size_t sum = 0; 
	int* res = NULL; 
	int tmp = 0; 

	while(fscanf(f, "%d"))
}
