#include "lettura.h"


int* leggiinteri(const char* filename, size_t* size) {

	FILE* f = fopen(filename, "rb");
	if (!f) {
		return NULL;
	}
	uint32_t n = 0;

	fread((void*)&n, sizeof(uint32_t), 1, f);

	memset((void*)size, 0, 8);
	memcpy((void*)size, (void*)&n, 4);

	int32_t* p = malloc(n * sizeof(int32_t));

	size_t res = fread(p, sizeof(int32_t), n, f);
	if (res < n || res == 0) {
		return NULL;
	}
	fclose(f);
	
	return p;
}