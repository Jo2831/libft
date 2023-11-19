#include "libft.h"

// #include <string.h>
// #include <stdio.h>
// #include "ft_strlen.c"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	val;
	size_t			i;

	p = (unsigned char *)b;
	val = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		p[i] = val;
		i++;
	}
	return (b);
}

// int main(int ac, char *av[])
// {
//     size_t len = ft_strlen(av[1]);
//     char *str1 = ft_memset(av[1], 'B', len);
//     char *str2 = memset(av[2], 'B',  len);

//     printf("%s\n", str1);
//     printf("%s\n", str2);
// }