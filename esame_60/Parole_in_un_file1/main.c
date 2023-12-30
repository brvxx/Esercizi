#include <stdlib.h>
#include <stdio.h>

extern char** extract_parole(const char* filename, size_t* n);

int main(void) {
	
	size_t n = 0;
	
	char** narrow = extract_parole("file01.txt", &n);
	for (size_t i = 0; i < n; ++i) {
		printf("%s\n", narrow[i]);
	}

	return 0; 
}