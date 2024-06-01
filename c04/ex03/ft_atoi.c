/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:12:22 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/22 12:07:49 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	digit;
	int	signal;

	digit = 0;
	signal = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal = signal * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		digit = (digit * 10) + (*str - 48);
		str++;
	}
	return (digit * signal);
}
/*
int	main()
{
	char	*str = " \t  ---+--+421337abc42";
	printf("%d\n", ft_atoi(str));
}

======= Exemple for the number 421337 =======

digit = 0 * 10 + 52 - 48 = 4
digit = 4 * 10 + 50 - 48 = 42
digit = 42 * 10 + 49 - 48 = 421
digit = 421 * 10 + 51 - 48 = 4213
digit = 4213 * 10 + 51 - 48 = 42133
digit = 42133 * 10 + 55 - 48 = 421337
*/
