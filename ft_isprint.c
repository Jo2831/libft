#include "libft.h"

// #include <stdio.h>
// #include <ctype.h>

int	isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int main(int ac, char *av[])
// {
//     char *arg = av[1];
//     int num = atoi(arg);
//     printf("%d\n",ft_isprint(num));
//     printf("%d",isprint(num));
// }