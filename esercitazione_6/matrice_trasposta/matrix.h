#ifndef MATRIX_H 
#define MATRIX_H 

#include <stdio.h>
#include <stdlib.h>

struct matrix {
    size_t rows, cols;
    double* data;
};

extern struct matrix* mat_transpose(const struct matrix* mat);
extern void matrix_stampa(const struct matrix* m);

#endif /* MATRIX_H */