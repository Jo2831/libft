#include "libft.h"

// #include <stdio.h>
// #include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main(int ac, char *av[])
// {
//     char *arg = av[1];
//     int num = atoi(arg);
//     printf("%d\n",ft_isascii(num));
//     printf("%d",isascii(num));
// }