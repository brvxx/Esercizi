#include <stdlib.h>

int tokyo_confronta(char a[2], char b[2]) {
	if (a == NULL || b == NULL) {
		return 0;
	}
	//controllo validità lanci
	for (size_t i = 0; i < 2; ++i) {							
		if (a[i] < 1 || a[i] > 6 || b[i] < 1 || b[i] > 6) {
			return 0;
		}
	}
	
	size_t sum_a = 0; 
	size_t sum_b = 0;
	size_t priority_a = 0; 
	size_t priority_b = 0;
	
	//caolo valore lanci
	if (a[0] > a[1]) {										
		sum_a = a[0] * 10 + a[1];
	}
	else {
		sum_a = a[0] + 10 * a[1];
	}
	if (b[0] > b[1]) {
		sum_b = b[0] * 10 + b[1];
	}
	else {
		sum_b = b[0] + 10 * b[1];
	}

	//calcolo priorità lanci
	if ((a[0] == 1 && a[1] == 2) || (a[0] == 2 && a[1] == 1)) {		
		priority_a = 3;
	}
	else if (a[0] == a[1]) {
		priority_a = 2;
	}
	else {
		priority_a = 1; 
	}
	

	if ((b[0] == 1 && b[1] == 2) || (b[0] == 2 && b[1] == 1)) {		
		priority_b = 3;
	}
	else if (b[0] == b[1]) {
		priority_b = 2;
	}
	else {
		priority_b = 1;
	}

	//calcolo vincitore
	if (priority_a > priority_b) {						
		return 1; 
	}
	else if (priority_a < priority_b) {
		return -1;
	}
	else {
		if (sum_a > sum_b) {
			return 1;
		}
		else if (sum_a < sum_b) {
			return -1;
		}
		else {
			return 0;
		}
	}
}