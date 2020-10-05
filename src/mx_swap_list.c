#include "libmx.h"

void mx_swap_list(t_list *head, t_list *list1) {
    void *tmp; 
   
   	tmp = head->data;
    head->data = list1->data;
    list1->data = tmp;
}
