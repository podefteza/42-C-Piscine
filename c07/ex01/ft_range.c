/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:45:48 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/28 16:26:18 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (size + 1));
	while (i < size)
	{
		array[i] = min;
		min++;
		i++;
	}
	array[i] = '\0';
	return (array);
}
/*
#include <stdio.h>
int	main()
{
	int min = 42;
	int max = 50;
	int *result = ft_range(min, max);
	int i = 0;

	while (i < max - min)
	{
		printf("%d\n", result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
/*
> Get the range of the array and determine the size
> If size <= 0, returns NULL
> Allocates the memory necessary to write in the array
> Starts putting the values of the ints in the positions of the array
> Close the array with a null terminator and return it
*/
