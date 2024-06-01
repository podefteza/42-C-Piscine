/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:03:56 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/23 15:24:47 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		else
			i = i + 1;
	}
	return (1);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("Returns 1 if the number is prime, 0 if it's not:\n");
	printf("%d > %d\n", 42, ft_is_prime(42));
	printf("%d > %d\n", -42, ft_is_prime(-42));
	printf("%d > %d\n", 43, ft_is_prime(43));
	printf("%d > %d\n", 97, ft_is_prime(97));
	printf("%d > %d\n", 4243, ft_is_prime(4243));
	return (0);
}*/
