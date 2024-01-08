#ifndef ANGOLI_H
#define ANGOLI_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct angolo {
    uint16_t gradi;
    uint8_t primi;
    uint8_t secondi;
};

extern struct angolo differenza_angoli(struct angolo a, struct angolo b);

#endif /* ANGOLI_H */
