/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:57:28 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/20 06:10:14 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*destbytes;
	unsigned char	*srcbytes;

	destbytes = (unsigned char *)dst;
	srcbytes = (unsigned char *)src;
	if (destbytes > srcbytes && len > 0)
	{
		i = len - 1;
		while (i >= 0)
		{
			destbytes[i] = srcbytes[i];
			if (i == 0)
			{
				break ;
			}
			i--;
		}
	}
	else
	{
		ft_memcpy(destbytes, srcbytes, len);
	}
	return (destbytes);
}

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	size_t			i;
// 	char			j;
// 	unsigned char	*d;
// 	unsigned char	*s;

// 	i = 0;
// 	j = 1;
// 	d = (unsigned char *)dest;
// 	s = (unsigned char *)src;
// 	if (!dest && !src)
// 		return (NULL);
// 	if (dest > src)
// 	{
// 		j = -1;
// 		d += n - 1;
// 		s += n - 1;
// 	}
// 	while (i < n)
// 	{
// 		*d = *s;
// 		d += j;
// 		s += j;
// 		i++;
// 	}
// 	return (dest);
// }

// int main(int argc, char *argv[])
// {
//     if (argc < 4) {
//         printf("Usage: %s <source> <destination> <length>\n", argv[0]);
//         return (1);
//     }

//     const char *source = argv[1];
//     char *destination = argv[2];
//     size_t length = (size_t)atoi(argv[3]);

//     printf("Before memmove:\n");
//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     ft_memmove(destination, source, length);

//     printf("After memmove:\n");
//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     return (0);

// }