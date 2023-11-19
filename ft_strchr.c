
#include "libft.h"

// #include <stdio.h>
// #include <string.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			break ;
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}

// int main()
// {
//     char str[] = "Hello, World!";
//     char *result;

//     result = ft_strchr(str, 'W');
//     if (result != NULL) {
//         printf("Found: %s\n", result);
//     } else {
//         printf("Not found\n");
//     }

//     return (0);
// }