/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:12:00 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/22 11:44:59 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writedigit(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	writedigit(nb % 10 + '0');
}
/*
int	main()
{
	ft_putnbr(0);
	write(1, "\n", 1);

	ft_putnbr(42);
	write (1, "\n", 1);
	
	ft_putnbr(-42);
	write (1, "\n", 1);
	
	ft_putnbr(2147483647);
	write(1, "\n", 1);

	ft_putnbr(-2147483648);
	write (1, "\n", 1);
	
	ft_putnbr(-421337);
	write (1, "\n", 1);
}

========== Exemple of the recursion for the value 421337 ==========
421337 / 10 = 42133
42133 / 10 = 4213
4213 / 10 = 421
421 / 10 = 42
42 / 10 = 4 → writes 4 + ‘0’ (4+48=52> 4 ascii)
42 % 10 = 2 →  writes 2 + ‘0’ (2+48=50> 2 ascii)
421 % 10 = 1 → writes 1 + ‘0’ (1+48=49> 1 ascii)
4213 % 10 = 3 → writes 3 + ‘0’ (3+48=51> 3 ascii)
42133 % 10 = 3 → writes 3 + ‘0’ (3+48=51> 3 ascii)
421337 % 10 = 7 → writes 7 + ‘0’ (7+48=55> 7 ascii)
*/
