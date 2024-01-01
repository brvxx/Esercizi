#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

char* sostituisci(const char* str, const char* vecchia, const char* nuova) {
	if (str == NULL || vecchia == NULL || nuova == NULL) {
		return NULL;
	}
	
	size_t lstr = strlen(str);
	if (lstr == 0) {
		char* res = calloc(1, sizeof(char));
		return res;
	}
	
	size_t lvecchia = strlen(vecchia);
	if (lvecchia == 0) {
		char* res = calloc(lstr + 1, sizeof(char));
		strncpy(res, str, lstr);
		return res;
	}
	
	size_t lnuova = strlen(nuova);
	size_t newlen = lstr;
	const char* occ = str;
	
	while((occ = strstr(occ, vecchia)) != NULL){
		newlen += (lnuova - lvecchia);
		occ += lvecchia;
	}

	char* newstr = calloc(newlen + 1, sizeof(char));

	const char* offset = str;
	occ = str;
	uintptr_t diffptr = 0;
	
	while ((occ = strstr(occ, vecchia))) {
		diffptr = occ - offset; 
	
		strncat(newstr, offset, diffptr);
		strncat(newstr, nuova, lnuova);
		offset = occ + lvecchia;
		occ = offset;
	}
	
	strcat(newstr, offset);
	
	return newstr; 
}