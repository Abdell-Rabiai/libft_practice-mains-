#include"libft.h"
#include "ft_lstadd_front.c"
#include "ft_lstadd_back.c"
#include "ft_lstsize.c"
#include "ft_lstlast.c"
#include "ft_lstdelone.c"
#include "ft_lstiter.c"
/*Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL*/

/*
typedef struct s_list
{
    void        *content;
    struct s_list  *next;
}                 t_list;
*/

t_list *ft_lstnew(void *content)
{
    t_list *new_node;
    new_node  = (t_list*)malloc(sizeof(t_list));
    if(!new_node)
        return NULL;
    (*new_node).content = content;
    (*new_node).next = NULL;
    return (new_node);
}
