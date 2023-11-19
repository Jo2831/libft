#include "libft.h"

// #include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = NULL;
	if (head)
		return (NULL);
	head = (t_list *)malloc(sizeof(t_list));
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