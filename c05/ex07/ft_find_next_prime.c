/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:09:40 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/29 15:28:06 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int number)
{
	int	i;
	int	nb;

	i = 2;
	nb = number / 2;
	if (number <= 1)
		return (0);
	while (i <= nb)
	{
		if (number % i == 0)
			return (0);
		else
			i = i + 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		nb = 2;
	else if (nb % 2 == 0)
		nb++;
	while (ft_is_prime(nb) != 1)
		nb = nb + 2;
	return (nb);
}
/*
#include <stdio.h>

int	main()
{
	printf("Returns the next prime greater or equal to the argument:\n");
	printf("%d > Next prime: %d\n", 2000000000, ft_find_next_prime(2000000000));
	printf("%d > Next prime: %d\n", 2147483647, ft_find_next_prime(2147483647));
	printf("%d > Next prime: %d\n", -42, ft_find_next_prime(-42));
	printf("%d > Next prime: %d\n", 47, ft_find_next_prime(47));
	printf("%d > Next prime: %d\n", 1234, ft_find_next_prime(1234));
	printf("%d > Next prime: %d\n", 4242, ft_find_next_prime(4243));
	return (0);
}*/
