#include <stdio.h>

char max_pot10(unsigned int val) {
    
    char i = -1;
    while (val > 0) {
        val /= 10;
        i += 1;
    }
    return i;
}

int main(void) {

    char ris = max_pot10(0);

    printf("il massimo esponente della potenza del dieci per cui il numero e divisibile e: %d", ris);

    return 0;
}