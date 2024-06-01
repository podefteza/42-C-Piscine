/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:40:57 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/17 12:19:22 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	rev;

	i = 0;
	while (i < (size / 2))
	{
		rev = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = rev;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[4] = {7, 21, 42, 63};
	int	size = 4;

	printf("Original: %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3]); 
	ft_rev_int_tab(tab, size);
	printf("In reverse: %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3]); 
	return (0);
}*/
