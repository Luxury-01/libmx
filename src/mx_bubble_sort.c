#include "libmx.h"

int mx_bubble_sort(char **arr, int size) {
    char *tmp;
    int count = 0;
   
    for (int i = 1; i < size;i++) {
        for (int k = 0;k < size - i;k++) {
   	        if (mx_strcmp(arr[k],arr[k+1]) > 0) {
   		        count++;
   			    tmp = arr[k];
   			    arr[k] = arr[k+1];
   			    arr[k+1] = tmp;
   		    }
		}
 	}
    return count;
}
