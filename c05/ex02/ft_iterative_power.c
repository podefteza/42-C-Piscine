/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:49:43 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/23 13:22:19 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main()
{
	int	nb = 5;
	int	power = 3;
	printf("%d ^ %d = %d\n", nb, power, ft_iterative_power(nb, power));
}
========== 5 power 3 (5³) = 5 x 5 x 5 = 125 ==========
*/
