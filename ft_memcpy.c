#include "libft.h"

// #include <stdio.h>
// #include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst != src)
	{
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

// int main(int ac, char *av[])
// {
//     size_t i = strlen(av[2]);
//     printf("%s\n",ft_memcpy(av[1], av[2], i));
//     printf("%s",memcpy(av[1], av[2], i));
// }