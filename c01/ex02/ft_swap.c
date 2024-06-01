/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:57:57 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/15 16:49:21 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main()
{	
	int	valuea;
	int	valueb;
	
	valuea = 42;
	valueb = 24;
	ft_swap(&valuea, &valueb);
	printf("a is now %d and b is now %d\n", valuea, valueb);
}*/
