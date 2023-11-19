/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytapano <ytapano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:18:03 by ytapano           #+#    #+#             */
/*   Updated: 2023/11/19 04:24:03 by ytapano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  #include <stdio.h>
// #include <limits.h>

int	ft_atoi(const char *str)
{
	int	nbr;
	int	prev;
	int	sign;
	int	i;

	nbr = 0;
	sign = 1;
	i = 0;
	while ((str[i] == ' ') || ('\t' <= str[i] && str[i] <= '\r'))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		prev = nbr;
		nbr = nbr * 10 + str[i] - '0';
		if (prev > nbr)
		{
			if (str[0] == '-')
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (nbr * sign);
}

// int main(int ac, char *av[])
// {
// 	if(ac == 2)
// 	{
// 		printf("%d", ft_atoi(av[1]));

// 	}
// }