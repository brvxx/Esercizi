#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>

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
	
	char* tmp = calloc(newlen + 1, sizeof(char));
	strncpy(tmp, str, lenstr);
	
	while (occ = strstr(tmp, vecchia)) {
	size_t diffptr = occ - tmp; 
	
	strncpy(newstr, tmp, diffptr);
	strncpy(&(newstr[diffptr]), nuova, lenuova);
	strcpy(&(newstr[diffptr + lenuova]), &(tmp[diffptr + lenold]));
	strncpy(tmp, newstr, newlen);
	}
	free(tmp);
	return newstr; 
}