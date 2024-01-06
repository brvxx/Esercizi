#ifndef FILE_H 
#define FILE_H 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lancio {
    char valori[3];
    char n_dadi;
};

extern void confronta_lanci(const struct lancio* attacco, const struct lancio* difesa,
    char* perse_attacco, char* perse_difesa);

#endif /* FILE_H */
