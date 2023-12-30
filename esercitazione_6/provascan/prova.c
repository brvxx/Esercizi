#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

	FILE* f = fopen("prova.txt", "r");
    int age = 0;
    char string[50] = {0};
    for (int i = 0; i < 5; ++i) {
        // Leggi l'età
        int nread = fscanf(f, "%d , %[^\n]", &age, string);
        printf("la persona in questione ha %d anni e si chiama %s, la scanf ritorna %d\n", age, string, nread);
      }
	return 0;
}