/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:35:25 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/23 15:11:56 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while ((i * i) < (unsigned int)nb)
		i++;
	if ((i * i) == (unsigned int)nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("Displays the value of the square root √");
	printf(" or 0 if it's an irrational number\n");
	printf("√%d = %d\n", 0, ft_sqrt(0));
	printf("√%d = %d\n", -42, ft_sqrt(-42));
	printf("√%d = %d\n", 42, ft_sqrt(42));
	printf("√%d = %d\n", 1234, ft_sqrt(1234));
	printf("√%d = %d\n", -1234, ft_sqrt(-1234));
	printf("√%d = %d\n", 1, ft_sqrt(1));
	printf("√%d = %d\n", -9, ft_sqrt(-9));
	printf("√%d = %d\n", 9, ft_sqrt(9));
	printf("√%d = %d\n", 36, ft_sqrt(36));
	printf("√%d = %d\n", 144, ft_sqrt(144));
}*/
