#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

size_t conta_parole(const char* s) {
	
	size_t words = 0; 
	int is_word = 0;     //setto una flag che mi indica se sono dentro ad una parola 

	for (size_t i = 0; s[i] != 0; ++i) {
		if (s[i] == ' ') {				//se il carattere della stringa analizzato è uno spazio allora non sono in una parola 
			is_word = 0; 
		}
		if (s[i] != ' ' && is_word == 0) {     //mentre se il carattere analizzato non è uno spazio e al ciclo precedente ci trovavamo fuori da una parola, 
			++words;						   // quindi quando is_word era 0, allora a questo punto ci troviamo in una nuova parola e aggiorniamo la flag
			is_word = 1; 
		}
	}

	return words; 
}