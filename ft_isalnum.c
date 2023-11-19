#include "libft.h"

// #include <ctype.h>
// #include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'))
		return (1);
	return (0);
}

// int main(int ac, char *av[])
// {
//     char *arg = av[1];
//     int num = atoi(arg);
//     printf("%d\n",ft_isalnum(num));
//     printf("%d",isalnum(num));
// }