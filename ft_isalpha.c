/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:23:02 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/17 20:23:03 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <ctype.h>
// #include<stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int main(int ac, char *av[])
// {
//    if(ac == 2)
//    {
//     char *ato = av[1];
//     int number = atoi(ato);
//     printf("%d\n",ft_isalpha(number));
//     //printf("%d",isalpha(number));
//    }
//    else
//         return (0);

// }