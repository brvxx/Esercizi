#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


extern int primigemelli(uint32_t start, uint32_t* x, uint32_t* y);

int main(void) {

    uint32_t a, b;

    int ris = primigemelli(4294967291, &a, &b);

    if (ris == 1) {
    printf("GIA LO SAI %u bim bam %u", a, b);
    }

    return 0;
}