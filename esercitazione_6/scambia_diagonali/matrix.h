#ifndef MATRIX_H 
#define MATRIX_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct matrix {
    size_t rows, cols;
    double* data;
};

extern struct matrix* scambia_diagonali(const struct matrix* m);
extern void matrix_stampa(const struct matrix* m);

#endif /* MATRIX_H */
