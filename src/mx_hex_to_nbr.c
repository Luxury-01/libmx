#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
	unsigned long num = 0;

    for (int i = mx_strlen(hex) - 1, n = 0; i >= 0; i--, n++) {
        if (mx_isalp(hex[i])) {
            num += mx_retalp(hex[i]) * mx_pow(16, n);
        }     
    	else {
	        num += (hex[i] - '0') * mx_pow(16, n);
		}
	}
    return num;
}
