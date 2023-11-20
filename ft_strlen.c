/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:58:22 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/19 19:58:23 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main(int ac, char *av[])
// {
//     if(ac == 2)
//     {
//         printf("%zu\n",ft_strlen(av[1]));
//         printf("%zu\n",strlen(av[1]));
//     }
//     else
//         return (0);
// }