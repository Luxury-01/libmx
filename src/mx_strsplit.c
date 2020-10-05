#include "libmx.h"

char **mx_strsplit(const char *s, char c) {
    if (!s) 
        return NULL;
    int size_arr = mx_count_words(s, c);
    char **result = malloc(sizeof(char *) * (size_arr + 1));
    int len = mx_strlen(s);

    for (int i = 0;i < size_arr;i++) {
        while (*s == c)
            s++;
        result[i] = (char *) malloc(len);
        for (int k = 0; *s != c;k++) {
            result[i][k] = *s;
            s++;
        }
    }
    result[size_arr] = NULL;
    return result;
}


