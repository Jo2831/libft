/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:57:13 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/20 05:18:51 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "ft_lstnew_bonus.c"
// #include "ft_lstadd_front_bonus.c"
// #include "stdio.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*node;

	node = lst;
	count = 0;
	while (node != NULL)
	{
		count++;
		node = node->next;
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