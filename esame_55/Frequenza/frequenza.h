#ifndef FREQUENZA_H 
#define FREQUENZA_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct oggetto {
    char* forma;
    char* colorenumero;
};
struct carta {
    struct oggetto* disegni;
    size_t n;
};

extern struct oggetto* piu_frequente(const struct carta* c);

#endif /* FREQUENZA_H */
