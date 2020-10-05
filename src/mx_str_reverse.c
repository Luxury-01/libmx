#include "libmx.h"

void mx_str_reverse(char *s) {
    int len;
    char tmp;
 
    if (s != NULL) { 
        len = mx_strlen(s);
        for (int i = 0; i < len / 2; i++) {
            tmp = s[i];
            s[i] = s[len - 1 - i];
            s[len - 1 - i] = tmp;
       }
    }
}
 
