#ifndef FILE_H
#define FILE_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct row {
    char* filename; // max 255 characters
    char prognosis; // M or S
};
struct dataset {
    struct row* data;
    size_t nrows;
};

extern struct dataset* dataset_load(const char* filename);

#endif /* FILE_H */
