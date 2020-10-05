#include "libmx.h"

char *mx_strtrim(const char *str) {
    char *res; 
    int rs = 0;
    char *s;
    int len;
    
    if (!str)
        return NULL;
    while (mx_isspace(*str))
        str++;
    s = (char*)str + mx_strlen(str) - 1;
    while (mx_isspace(*s)) { 
        rs++;
        s--;
    }
    len = mx_strlen(str) - rs;
    res = mx_strnew(len);
    if (!(res = mx_strncpy(res, str, len)))
        return NULL;
    return res;
}
