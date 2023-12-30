#include "lettura.h"


int* leggiinteri(const char* filename, size_t* size) { 
	/*filename è un input perchè è un CONST char*, sicuramente non potrò andare a cambiarlo*/
	
	FILE* f = fopen(filename, "rb");  
	/*non vengono convertiti gli "acapo" */
	if (!f) {
		return NULL;
	}
	uint32_t n = 0;

	size_t nread = fread(&n, sizeof(uint32_t), 1, f);
	if (nread != 1) {
		fclose(f);
		return NULL;
	}
	*size = n;		
	/*dentro a size_t ci può stare un qualsiasi numero, quindi posso farlo */

	int32_t* p = malloc(n * sizeof(int32_t));

	size_t res = fread(p, sizeof(int32_t), n, f);
	if (res != n) {
		free(p);
		fclose(f);
		return NULL;     
		/*non stiamo liberando la memoria in caso di errore, ritornando NULL il main non può liberare la memoria allocata --> devo fare prima di uscire dalla call uma free*/
	}
	fclose(f);
	return p;
}