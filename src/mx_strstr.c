#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    int j = 0;
 	int i = 0;

 	if (mx_strlen(needle) == 0) 
 		return (char*)haystack;
 	while (haystack[i]) {
 		j = i;
 		while (haystack[j] == needle[j - i]) {
 			if (needle[j - i + 1] == 0) 
 				return (char*)&haystack[i];
 			j++;
 			}
 		i++;
 		}
 	return NULL;
}
