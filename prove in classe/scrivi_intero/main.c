#include <stdbool.h>

extern bool scrivi_intero(const char* filename, int i);

int main(void) {
	bool b;

	b = scrivi_intero("prova1", 83);

	return 0;
}