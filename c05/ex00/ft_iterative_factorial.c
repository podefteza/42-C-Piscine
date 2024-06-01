/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:32:34 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/23 11:03:52 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		result = result * (nb - 1);
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	int	number = 5;
	printf("The factorial of %d is %d\n",
		number, ft_iterative_factorial(number));
}

5! = 5 x 4 x 3 x 2 x 1 = 120

The maximum value of a factorial using int is 12!
    12! = 479001600
max int = 2147483647
*/
