#include "libmx.h"

void mx_del_strarr(char ***arr) {
	char **temp = *arr;

	while (**arr != 0) {
		temp = *arr; 	
		while (*(temp + 1))
			temp++;
		free(*temp);
		temp = NULL;
	}
	free(*arr);
	**arr = NULL;
}
