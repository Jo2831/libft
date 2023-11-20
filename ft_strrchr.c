/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:58:34 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/20 05:35:43 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include "ft_strlen.c"
// #include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

// int main()
// {
//     char str[] = "Hello, World!";
//     char *result;
//     char *res;

//     result = ft_strrchr(str, 'W');
//     res = strrchr(str, 'W');

//     printf("Found: %s\n", result);
//     printf("Found: %s\n", res);

//     return (0);
// }