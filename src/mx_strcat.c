#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    int i = mx_strlen(s1);
    int j;

    for (j = 0; s2[j] != '\0'; j++) {
        s1[i+j] = s2[j];
    }
    s1[i+j] = '\0';
    return s1;
}
