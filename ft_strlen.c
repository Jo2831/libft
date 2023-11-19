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