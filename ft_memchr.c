/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:57:17 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/19 19:57:18 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "stdio.h"
// #include "string.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

// int main(int ac, char *av[])
// {
//     char *ar1 = av[2];
//     char *ar2 = av[3];
//     size_t num = atoi(ar1);
//     size_t num1 = atoi(ar2);

//     printf("%s",memchr(av[1], num, num1));
//     printf("%s",ft_memchr(av[1], num, num1));

// }