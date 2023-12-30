#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdlib.h>


extern bool scrivi_intero(const char* filename, int i);

int main(void) {

	bool res = scrivi_intero("edduardo.txt", -2354);

	return 0; 
}