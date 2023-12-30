#include <string.h>

int main(void) {

	char stringa[] = "tu per me sei uno zemen.";

	char* p = strchr(stringa, 's');

	char pos = p - stringa;

	return 0; 
}