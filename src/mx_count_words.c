#include "libmx.h"

int mx_count_words(const char *str, char c) {
    int count = 0; // word count  
    int i = 0;

    if (str == 0)
        return -1;
    while (str[i] != '\0') {
        while (str[i] == c) {
            i++;
            if (str[i] == 0)
                return count;
        }   
        count++; 		
        while (str[i] != c) {
            i++;
            if (str[i] == 0)
                return count;
        } 
    }
  	return count;
}
 
