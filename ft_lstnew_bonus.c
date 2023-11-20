/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:57:10 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/20 05:14:31 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}

// int main(int ac, char *av[])
// {
//     t_list *node = ft_lstnew(av[1]);
//     if(node) {
//         printf ("%s", (char *)node->content);
//         free(node);
//     }
//     else {
//         printf("faild create new node");
//     }
//     return (0);
// }