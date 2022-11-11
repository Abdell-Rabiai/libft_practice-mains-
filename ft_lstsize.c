#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;
    t_list *tmp;

    i = 0;
    tmp = (t_list*)malloc(sizeof(t_list));
    tmp = lst;
    while(tmp != NULL)
    {
        i++;
        tmp = tmp->next;
    }
    return (i);
}