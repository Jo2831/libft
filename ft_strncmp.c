/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:58:28 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/19 19:58:29 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

// int main(int ac, char *av[])
// {
//     if (ac == 4)
//     {
//         char *str = av[3];
//         size_t num = atoi(str);
//         printf("%d\n",ft_strncmp(av[1],av[2], num));
//         printf("%d",strncmp(av[1],av[2], num));

//     }
// }