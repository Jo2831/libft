/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:58:47 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/19 19:58:48 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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