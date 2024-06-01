/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:10:50 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/16 12:48:06 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	valuea;
	int	valueb;
	int	div;
	int	mod;
	
	valuea = 42;
	valueb = 10;
	ft_div_mod(valuea, valueb, &div, &mod);
	printf("The result of the division of %d by %d ", valuea, valueb);
	printf("is %d with a remainder of %d.\n", div, mod);
}*/
