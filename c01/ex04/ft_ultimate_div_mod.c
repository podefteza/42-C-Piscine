/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:34:19 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/20 12:15:19 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	valuea;

	valuea = *a;
	*a = *a / *b;
	*b = valuea % *b;
}
/*
int	main()
{
	int	valuea;
	int	valueb;
	
	valuea = 42;
	valueb = 5;
	printf("The result of the division of %d by %d is ", valuea, valueb);
	ft_ultimate_div_mod(&valuea, &valueb);
	printf("%d, with a remainder of %d.\n", valuea, valueb);
}*/
