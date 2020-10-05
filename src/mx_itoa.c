#include "libmx.h"

char *mx_itoa(int number) {
    char *c =  malloc(mx_num_len(number));
    char *c1 = malloc(mx_num_len(number));
    int i = 0;

    c = mx_num_ret( number);
    for (int j = mx_num_len(number) - 1; i < mx_num_len(number); i++, j--)
        c1[i] = c[j];
    free(c);
    c = NULL;
    c1[i] = '\0';
    return c1;
}
