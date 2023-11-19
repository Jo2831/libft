#include "libft.h"

// #include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main(int ac, char *av[])
// {
//     t_list *ptr;
//     t_list *ptr1;

//     ptr = malloc(sizeof(t_list));
//     if(!ptr)
//         return (0);
//     ptr->content = av[2];
//     ptr->next = NULL;
//     t_list *head;
//     head = ft_lstnew(av[1]);
//     ft_lstadd_front(&head, ptr);

//     ptr1 = head;
//     while (ptr1 != NULL)
//     {
//         printf("%s", ptr1->content);
//         ptr1 = ptr1->next;
//     }
//     return (0);
// }