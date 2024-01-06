#ifndef RATIOAL_H 
#define RATIONAL_H 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct rational {
    int num;
    unsigned int den;
};

extern struct rational* rational_read(const char* filename, size_t* size);

#endif /* RATIONAL_H */
