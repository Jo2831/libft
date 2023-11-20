/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:23:41 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/19 18:24:00 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <ctype.h>

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	return (0);
}

// int main(int ac, char *av[])
// {
//     char *arg = av[1];
//     int num = atoi(arg);
//     printf("%d\n",ft_isprint(num));
//     printf("%d",isprint(num));
// }