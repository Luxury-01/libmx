#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *str1 = s1;
 	const unsigned char *str2 = s2;
 	size_t i;

 	for (i = 0;i < n;i++) {
 		if (*str1 != *str2) {
 			return *str1 - *str2;
 		}
 		str1++;
 		str2++;
 			
 	}
 	return 0;
 }
