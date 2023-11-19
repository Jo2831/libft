#include "libft.h"

// #include "ft_strlen.c"
// #include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	size_t	i;
	size_t	k;
	size_t	sum;
	size_t	j;
	size_t	p;

	i = ft_strlen(s1);
	k = ft_strlen(s2);
	sum = i + k;
	j = 0;
	arr = (char *)malloc(sizeof(char) * (sum + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (s1[j])
	{
		arr[j] = s1[j];
		j++;
	}
	p = 0;
	while (s2[p])
	{
		arr[p + j] = s2[p];
		p++;
	}
	arr[p + j] = '\0';
	return (arr);
}

// int main(int ac, char *av[])
// {
//     printf("%s", ft_strjoin(av[1],av[2]));

// }