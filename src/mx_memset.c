#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    char* d = (char*)b;

    while (len-- > 0) 
        *d++ = c;
    return b;
}
