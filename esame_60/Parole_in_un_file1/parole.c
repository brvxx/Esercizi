#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** extract_parole(const char* filename, size_t* n) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}
	
	char** parole = NULL;
	char* parola = NULL; 
	char letter;
	int is_word = 0;
	size_t words = 0;
	size_t word_idx = 0;

	while ((letter = fgetc(f))) {
		if (letter == ' ' || letter == '\t' || letter == '\n' || letter == EOF) {
			if (is_word) {
				
				words += 1;
				parole = realloc(parole, words * sizeof(char*));
				parole[words - 1] = calloc(word_idx + 1, sizeof(char));
				
				parola[word_idx] = 0;
				
				strncpy(parole[words - 1], parola, word_idx + 1);
				free(parola);
				
				parola = NULL;
				
				is_word = 0;
				word_idx = 0;
			}
			if (letter == EOF) {
				break;
			}
		}
		else {
			if (is_word == 0) {
				is_word = 1;
			}
			if (is_word == 1) {
			parola = realloc(parola, (word_idx + 2) * sizeof(char));
			parola[word_idx] = letter; 
			}
			++word_idx;
		}
	}
	
	*n = words;
	fclose(f);
	return parole;
}