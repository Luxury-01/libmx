#include "libmx.h"

char *mx_h_to_d(unsigned long nbr) {
    char hexadecimal[256];
    int j = 0;
    unsigned long remainder = 0;
    char *p = hexadecimal;

    while (nbr != 0) {
        remainder = nbr % 16;          
        if (remainder < 10)
            hexadecimal[j++] = 48 + remainder;   
        else
            hexadecimal[j++] = 87 + remainder;  
        nbr = nbr / 16;            
    }
    return p;
}
