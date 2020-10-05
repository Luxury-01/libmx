#include "libmx.h"

char *mx_strdup(const char *s1) {
    char *d = malloc(sizeof(char) * mx_strlen(s1) + 1); 

    if (d == 0) { 
        return 0;
    }          
    mx_strcpy(d,s1);                        
    return d;                            
}
