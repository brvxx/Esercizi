#include <stdbool.h>

bool scrivi_intero(const char* filename, int i);

int main(void) {
	
	bool res = scrivi_intero("foozati.txt", 9345);

	return 0; 
}