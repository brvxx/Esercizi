#include "lettura.h"

int main(void) {


	size_t size = 0;
	int* ret = leggiinteri("dati2.bin", &size);

	printf("i valori in questione sono: %zu \n", size);

	for (size_t i = 0; i < size; ++i) {
		printf("%d\n", ret[i]);
	}
	
	free(ret);
	return 0; 
}