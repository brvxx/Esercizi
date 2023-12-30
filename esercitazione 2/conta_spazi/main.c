#include <stdlib.h>

extern unsigned int conta_spazi(const char* s);

int main(void) {
    
    char s[] = "Ecco la stringa di prova";
    
    size_t spazi;
    
    spazi = conta_spazi(s);
    
    return 0;
}