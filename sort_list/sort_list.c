#include "list.h"
#include <unistd.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list  *first;

    first = lst;
    while (lst->next != NULL)
    {   
        if ((cmp)(lst->data, lst->next->data) == 0)
        {
            int swap = lst->next->data;
            lst->next->data = lst->data;
            lst->data = swap;
            lst = first;
        }
        else
            lst = lst->next;
    }
    lst = first;
    return (lst);
}