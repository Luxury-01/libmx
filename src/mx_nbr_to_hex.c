#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    char *p = NULL;
    char *p1 = NULL;
    int j = mx_strlen(mx_h_to_d(nbr));
   

    p = mx_strnew(j); 
    p1 = mx_h_to_d(nbr);
    for (int i = 0, k = j - 1; i < j; i++,k--)
        p[k] = p1[i];
    return p;
}
