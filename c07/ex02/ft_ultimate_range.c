/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:56:19 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/30 11:15:18 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>

int	main()
{
	int	*array;

	printf("%d\n", ft_ultimate_range(&array, 50, 20));
	free(array);
	
	printf("%d\n", ft_ultimate_range(&array, 10, 20));
	free(array);
	
	printf("%d\n", ft_ultimate_range(&array, 42, 42));
	free(array);
	return (0);
}*/
/*
> Allocate and assign in range all the values between min and max
> If min >= max, range points to NULL and returns 0
> Determine the size of the array and allocate the space
> If there's an error allocating, returns -1
> Stars populating the array with the value of min and increments it
> After assigning the values to the array, returns the size of range
*/
