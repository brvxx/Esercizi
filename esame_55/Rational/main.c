#include "rational.h"

int main(void) {

	size_t size = 0; 
	struct rational* res = rational_read("file1.txt", &size);

	printf("nel file ci sono %zu frazioni\n\n", size);
	for (size_t i = 0; i < size; ++i) {
		printf("%d/%u\n\n", res[i].num, res[i].den);
	}
	return 0;
}