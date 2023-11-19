#include "libft.h"

// #include <stdio.h>
// #include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	long	i;

	if (dst < src)
	{
		i = 0;
		while ((size_t)i < len)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
		return (dst);
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i--;
		}
		return (dst);
	}
}

// int main(int argc, char *argv[])
// {
//     if (argc < 4) {
//         printf("Usage: %s <source> <destination> <length>\n", argv[0]);
//         return (1);
//     }

//     const char *source = argv[1];
//     char *destination = argv[2];
//     size_t length = (size_t)atoi(argv[3]);

//     printf("Before memmove:\n");
//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     memmove(destination, source, length);

//     printf("After memmove:\n");
//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     return (0);

// }