#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

static char* cifre[] = { "zero", "uno", "due", "tre", "quattro", "cinque", "sei", "sette", "otto", "nove" };

char* extract_number(const char* message) {
	if (message == NULL) {
		return NULL;
	}

	char* parola = strtok((char*)message, " ");
	char* segreto = NULL;
	size_t dim_segreto = 0;

	do {
		for (int i = 0; i < 10; ++i) {
			if (strcmp(parola, cifre[i]) == 0) {
				++dim_segreto;
				segreto = realloc(segreto, 100 * sizeof(char));
				segreto[dim_segreto - 1] = i + '0';
			}
		}
	} while ((parola = strtok(NULL, " ")));
	

	segreto = realloc(segreto, 100 * sizeof(char));
	segreto[dim_segreto] = 0;
	
	return segreto; 
}