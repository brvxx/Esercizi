#include <stdlib.h>

size_t lungh(const char* str) {
    size_t caratt = 0;
    for (size_t i = 0; str[i] != 0; ++i) {
        ++caratt;
    }
    return caratt;
}

size_t conta_parole(const char* s) {
    size_t n = lungh(s);

    if (n == 0) {
        return 0;
    }

    size_t parole = 0;

    for (size_t i = 0; i < n; ++i) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            ++parole;
        }
    }
    return parole;
}