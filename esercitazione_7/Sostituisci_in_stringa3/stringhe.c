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
		return calloc(1, sizeof(char));;
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
	occ = NULL;
	
	while (1) {
		occ = strstr(str, vecchia);
		if (occ == NULL) {
			break;
		}
		
		strncat(newstr, str, occ - str);
		strcat(newstr, nuova);
		str = occ + lvecchia;
	}
	strcat(newstr, str);
	
	return newstr; 
}