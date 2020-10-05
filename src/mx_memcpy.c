 #include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    size_t i;
    char* cdest = (char*)dst;
    const char* csrc = (char*)src;

    for (i = 0; i < n; ++i)
        *cdest++ = *csrc++;
    return dst;
}
 
