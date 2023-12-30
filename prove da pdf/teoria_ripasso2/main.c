#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

int main(void) {

	char string[40] = "ciao mondo cavolo!";
	char* ptr = strrchr(string, 'o');
	char x = (ptr - string);
	
	strncat(string, " suca:D",5);
	
	char arr[5] = { 1, 77, 3 , 5 , 56 };
	memset(arr, 69, 4);


	return 0; 
}