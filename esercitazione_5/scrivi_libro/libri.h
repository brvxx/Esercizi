#ifndef LIBRI_H
#define LIBRI_H 


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

struct libro {
    char* titolo;
    uint16_t* anni_ristampe;
};

extern bool libro_scrivi(const struct libro* p, FILE* f);

#endif /* LIBRI_H */