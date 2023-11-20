/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:58:25 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/19 19:58:26 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	length;
	char			*res;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	res = malloc(length * sizeof(char) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// char map_function(unsigned int index, char c)
// {
//     if (c >= 'a' && c <= 'z')
//         return (c - 'a' + 'A');
//     return (c);
// }

// int main()
// {
//     const char *input_string = "Hello, World!";

//     char *result = ft_strmapi(input_string, &map_function);

//     if (result)
//     {
//         printf("Original string: %s\n", input_string);
//         printf("Mapped string:   %s\n", result);

//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return (0);
// }
