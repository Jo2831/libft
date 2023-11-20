/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:14:06 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/19 21:30:53 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "ft_strlen.c"
// #include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// int main(void) {
//     char destination[12];
//     const char *source = "Hello, world!";
//     size_t size = sizeof(destination);

//     size_t copied_len = ft_strlcpy(destination, source, size);

//     printf("Copied string: %s\n", destination);
//     printf("Copied length: %zu\n", copied_len);

//     return (0);
// }