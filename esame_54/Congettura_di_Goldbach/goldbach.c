#include <stdbool.h>
#include <stdint.h>

bool is_prime(uint32_t val) {
    if (val == 0 || val == 1) {
        return false;
    }
    for (uint32_t i = 2; i * i <= val; ++i) {
        if (val % i == 0) {
            return false;
        }
    }
    return true;
}

bool goldbach(uint32_t n, uint32_t* p1, uint32_t* p2) {
    if ((n % 2 != 0) || (n < 4)) {
        return false;
    }
    for (uint32_t i = 2; i <= n; ++i) {
        if (is_prime(i) && is_prime(n - i)) {
            *p1 = i;
            *p2 = n - i;
            return true;
        }
    }
    return false;
}
