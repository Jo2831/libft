#include "libft.h"

// #include <stdio.h>
// #include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

// int main(int ac, char *av[])
// {
//     char *str = av[1];
//     int num = atoi(str);
//     printf("%c\n",ft_tolower(num));
//     printf("%c",tolower(num));

// }