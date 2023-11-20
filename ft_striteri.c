/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:58:06 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/19 19:58:07 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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