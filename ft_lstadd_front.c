#include "libft.h"
/**lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.
Adds the node ’new’ at the beginning of the list.*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}