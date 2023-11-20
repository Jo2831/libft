/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:55:22 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/19 19:55:23 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>
// #include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// int main(int ac, char *av[])
// {
//     size_t len1 = strlen(av[1]);
//     size_t len2 = strlen(av[2]);

//     ft_bzero(av[1], len1);
//     bzero(av[2],  len2);

//     printf("%s\n", av[1]);
//     printf("%s\n", av[2]);

// }