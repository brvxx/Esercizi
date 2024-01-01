#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

char* sostituisci(const char* str, const char* vecchia, const char* nuova) {
	if (str == NULL || vecchia == NULL || nuova == NULL) {
		return NULL;
	}
	
	size_t lenstr = strlen(str);
	if (lenstr == 0) {
		char* res = calloc(1, sizeof(char));
		return res;
	}
	
	size_t lenold = strlen(vecchia);
	if (lenold == 0) {
		char* res = calloc(lenstr + 1, sizeof(char));
		strncpy(res, str, lenstr);
		return res;
	}
	
	size_t lenuova = strlen(nuova);
	size_t newlen = 0;
	if (lenuova > lenold) {
		newlen = (lenstr / lenold + 1) * lenuova;
	}
	else {
		newlen = (lenstr / lenold + 1) * lenold;
	}
	char* newstr = calloc(newlen + 1, sizeof(char));

	char* occ = strstr(str, vecchia);
	
	if (occ == NULL) {
		char* res = calloc(lenstr + 1, sizeof(char));
		strncpy(res, str, lenstr);
		return res;
	}
	
	char* offset = str;
	uintptr_t diffptr = 0;
	occ = str;
	
	while (occ = strstr(occ, vecchia)) {
		diffptr = occ - offset; 
	
		strncat(newstr, offset, diffptr);
		strncat(newstr, nuova, lenuova);
		offset = occ + lenold;
		occ += lenold;
	}
	
	occ = str + strlen(str); //punta al terminatore della stringa iniziale 
	diffptr = occ - offset; 
	strncat(newstr, offset, diffptr);
	
	return newstr; 
}