#ifndef MATRIX_H 
#define MATRIX_H 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct matrix {
    size_t rows, cols;
    double* data;
};

extern struct matrix* matrix_flip_v(const struct matrix* m);

#endif /* MATRIX_H */
