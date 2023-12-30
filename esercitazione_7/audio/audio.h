#ifndef AUDIO_H 
#define AUDIO_H 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct audio {
    size_t samples;
    short* left, * right;
};

extern int audio_read(const char* filename, struct audio* a);

#endif /* AUDIO_H */
