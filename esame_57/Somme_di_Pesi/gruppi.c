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
	
	size_t gruppi = 0; 
	size_t is_group = true;
	char buf[256] = {0};
	int sum = 0; 
	int tmp = 0; 
	int* res = NULL;
	while(fgets(buf,255,f)){			//vai avanti finchè fgets non ritorna un NULL pointer (vale 0)
		if (strlen(buf) == 1 && is_group == true) {
			gruppi += 1; 
			res = realloc(res, gruppi * sizeof(int));
			res[gruppi - 1] = sum;
			sum = 0;
			is_group = false;
		}
		else {
			if (strlen(buf) == 1) {
				continue;
			}
		sscanf(buf, "%d", &tmp);
		sum += tmp; 
			if (!is_group) {
			is_group = true;
			}
		}
	}
	if (is_group == true) {			//aggiungo l'ultimo gruppo poichè il file non ha il \n alla fine
		gruppi += 1;
		res = realloc(res, gruppi * sizeof(int));
		res[gruppi - 1] = sum;
	}
	*ngruppi = gruppi;
	fclose(f);
	return res;
}