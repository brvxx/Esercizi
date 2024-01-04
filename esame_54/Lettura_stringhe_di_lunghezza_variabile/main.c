#include "getline.h"

int main(void)
{
    char* line = NULL;
    size_t n = 0;

    FILE* f = fopen("example.txt", "r");
    size_t cread = 0;
    
    while ((cread = getline(&line, &n, f)) > 0) {
        printf("caratteri letti: %zu\nla stringa e': %s\n\n",cread ,line);
    }
    
    free(line);
    return 0;
}