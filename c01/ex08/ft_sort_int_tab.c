/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:30:59 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/17 12:23:08 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	sort;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				sort = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = sort;
			}
			i++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	tab[4] = {6, 3, 51, 30};
	int	size = 4;
	
	printf("Original: %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3]); 
	ft_sort_int_tab(tab, size);
	printf("Sorted by ascending order: ");
	printf("%d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3]); 
	return (0);
}*/
