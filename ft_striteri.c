#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

// void increment_char(unsigned int index, char *c)
// {
//     (*c)++;
// }

// int main()
// {
//     char input_string[] = "abcde";

//     printf("Original string: %s\n", input_string);

//     ft_striteri(input_string, &increment_char);

//     printf("Modified string: %s\n", input_string);

//     return (0);
// }