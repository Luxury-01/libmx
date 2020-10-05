#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
	if (!arr || !delim)
		return;
	while (*arr){
		mx_printstr(*arr);
		if (*(arr+1) != '\0') 
    		mx_printstr(delim);
    	arr++;
	}
	mx_printchar('\n');
}
