#include"libft.h"
#include <stdio.h>
#include "ft_lstadd_front.c"
#include "ft_lstadd_back.c"
#include "ft_lstsize.c"
#include "ft_lstlast.c"
#include "ft_lstdelone.c"
#include "ft_lstiter.c"
#include "ft_lstmap.c"
#include "ft_lstclear.c"


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

void *ftolower(void *str)
{
    char *s = (char *)str;
    if(!s)
        return (NULL);
    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        s[i] = s[i] - 32;
        i++;
    }
    return (s);
}

int main()
{
    //the head node of the list which contains the adress of the first node
    t_list **Head_pointer;
    t_list *A;
    Head_pointer = &A;
    t_list *new_list;

    char h[] = "hello hh";
    char a[] = "from rtrrg";
    char b[] = "the futur gyttn ";

    *Head_pointer = ft_lstnew(h);
    t_list *temp;
    temp = ft_lstnew(a);
    ft_lstadd_back(Head_pointer,temp);

    temp = ft_lstnew(b);
    ft_lstadd_back(Head_pointer,temp);


    temp = *Head_pointer;
    while(temp != NULL)
    {
        printf("%s\n",temp->content);
        temp = temp->next;
    }
    printf("\n\n");
    new_list = ft_lstmap(*Head_pointer,&ftolower, &free); 

    // traverssing the linked list using the temporery pointer temp; 
    temp = new_list;
    while(temp != NULL)
    {
        printf("%s\n",temp->content);
        temp = temp->next;
    }
    // get the size of the list 
    printf("\n%d\n",ft_lstsize(new_list));

    // get the last node of the list
    temp = ft_lstlast(new_list);
    printf("\n%s\n",temp->content);
    return 0;
}