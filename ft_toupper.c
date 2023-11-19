#include "libft.h"

// #include <stdio.h>
// #include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 97 + 65);
	return (c);
}

// int main(int ac, char *av[])
// {
//     char *str = av[1];
//     int num = atoi(str);
//     printf("%c\n",ft_toupper(num));
//     printf("%c",toupper(num));

// }