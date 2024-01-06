#include <stdio.h>

extern char* crazyprint(char* str);

int main(void) {

	char str[] = "John merda";

	char* res = crazyprint(str);

	return 0;
}