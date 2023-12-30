#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int is_primo(uint32_t num) {
    if (num == 1)
        return 0;

    for (uint32_t i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return 0;
      
    }

    return 1;
}

int primigemelli(uint32_t start, uint32_t* x, uint32_t* y) {
    if (start % 2 == 0) {
        start += 1;
    }

    uint32_t primo_1 = 0;

    for (uint32_t i = start; i < UINT32_MAX; i += 2) {
        if (is_primo(i)) {
            if (i - primo_1 == 2) {
                *x = primo_1;
                *y = i;
                return 1;
            }
            else {
                primo_1 = i;
            }
        }
    }

    printf("non esiste una coppia di primi che differiscano di due da qui in poi");

    return 0;
}