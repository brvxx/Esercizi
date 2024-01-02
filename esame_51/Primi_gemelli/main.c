#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

extern bool primigemelli(uint32_t start, uint32_t* x, uint32_t* y);

int main(void) {

	uint32_t num1 = 0;
	uint32_t num2 = 0; 
	uint32_t start = 8;

	bool res = primigemelli(start, &num1, &num2);

	printf("%s", res ? "esiste una coppia di primi gemelli a partire da start\n" : "non esiste una coppia di primi gemelli a partire da start");
	if (res) {
		printf("e questi sono: %u , %u", num1, num2);
	}
	
	return 0;


}