#include "libft.h"

// #include "ft_lstnew_bonus.c"
// #include "ft_lstadd_front_bonus.c"
// #include "stdio.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int main(int ac, char *av[])
// {
//     t_list *ptr;
//     ptr = malloc(sizeof(ptr));
//     if(!ptr)
//         return (0);
//     ptr->content = av[2];
//     ptr->next = NULL;

//     t_list *head;
//     head = ft_lstnew(av[1]);

//     ft_lstadd_front(&head, ptr);

//     t_list *store;
//     store = head;
//    printf("%d",ft_lstsize(store));

//    return (0);

// }