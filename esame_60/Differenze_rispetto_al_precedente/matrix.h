#ifndef MATRIX_H
#define MATRIX_H 

#include <stdlib.h>
#include <stdio.h>

struct matrix {
    size_t rows, cols;
    double* data;
};

extern struct matrix* mat_diffleft(const struct matrix* m);

#endif /* MATRIX_H */