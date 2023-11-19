/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:14:46 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/19 04:16:37 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*new;
	size_t			totalsize;
	size_t			i;
	unsigned char	*ptr;

	totalsize = count * size;
	i = 0;
	new = (void *)malloc(totalsize);
	if (!new)
		return (NULL);
	ptr = (unsigned char *)new;
	while (i < totalsize)
	{
		ptr[i] = 0;
		i++;
	}
	return (new);
}

// int main(int ac, char *av[])
// {
//     size_t numel = atoi(av[1]);
//     size_t eleSize = sizeof(int);

//     int *arr = (int *)calloc(numel, eleSize);
//     int *arr1 = (int *)ft_calloc(numel, eleSize);

//     for (int i = 0; i < numel; i++)
//     {
//         arr[i] = i + 1;
//         arr1[i] = i + 1;
//         printf("%d", arr[i]);
//         printf("%d", arr1[i]);
//     }

// }