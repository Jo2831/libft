/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:14:06 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/19 04:14:10 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "ft_strlen.c"
// #include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
	{
		dst[i] = '\0';
		i++;
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