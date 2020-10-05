#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    unsigned int i = 0;
 	char *dest = (char*)dst;
 	char *crs = (char*)src;
 	char *ptr;
 	ptr = 0;

 	while (i < n && ptr == 0) {
 	    dest[i] = crs[i];
 		if (crs[i] == ((char)c))
            ptr = dest + i + 1;
 		i++;
 	}
  	return (ptr);
}
