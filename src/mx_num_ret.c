#include "libmx.h"

char *mx_num_ret(int number) {
    char *c = malloc(mx_num_len(number));
    long num = number;
    int i = 0;

    if (num == 0) {
        c[i] = '0';
    }
    if (num < 0) {
        num = -num;
        c[mx_num_len(number) - 1] = '-';
    }
    while (num != 0) {
        c[i] = (num % 10) + '0';
        num /= 10;
        i++;
    }
    return c;
}
