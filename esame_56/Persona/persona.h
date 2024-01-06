#ifndef PERSONA_H 
#define PERSONA_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persona {
    int anni;
    char nome[50];
};

extern struct persona* leggi_persone(const char* filename, size_t* size);

#endif /* PERSONA_H */
