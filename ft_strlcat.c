#include "libft.h"

// #include "ft_strlen.c"

size_t	ft_strlcat(char *d, const char *s, size_t dstsize)
{
	size_t	dst_len;
	size_t	index;
	size_t	i;

	if (!((unsigned char)d && (unsigned char)s))
		return (0);
	dst_len = ft_strlen(d);
	index = 0;
	while (d[index])
		index++;
	i = 0;
	while (s[i] && (i + index + 1) < (dstsize))
	{
		d[index + i] = s[i];
		i++;
	}
	if (i < dstsize)
		d[index + i] = '\0';
	if (dstsize <= dst_len)
		return (ft_strlen(s) + dstsize);
	else
		return (ft_strlen(s) + dst_len);
}

// int main(void) {
// char destination[12];
// const char *source = "Hello, world!";
// size_t size = sizeof(destination);

// size_t copied_len = ft_strlcat(destination, source, size);

// printf("Copied string: %s\n", destination);
// printf("Copied length: %zu\n", copied_len);
// 	printf("%zu\n",ft_strlcat((void *)0,(void *)0,5));

//     return (0);
// }