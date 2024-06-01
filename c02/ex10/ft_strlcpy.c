/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:20:40 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/22 15:34:54 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sizedest;
	unsigned int	sizesrc;

	i = 0;
	sizedest = 0;
	sizesrc = 0;
	while (dest[sizedest] && sizedest < size - 1)
		sizedest++;
	while (src[sizesrc] && sizesrc < size - 1)
		sizesrc++;
	while (src[i] && sizedest < size - 1)
	{
		dest[sizedest] = src[i];
		i++;
		sizedest++;
	}
	dest[sizedest] = '\0';
	return (sizesrc);
}

/*The strlcpy() and strlcat() functions return the total length
				of the string they tried to create.*/
/*
#include <stdio.h>
int	main()
{
	char	dest[20] = "42";
	char	src[] = "PortoPiscine#9";
	unsigned int size = 15;
	printf("%s", dest);
	unsigned int result = ft_strlcpy(dest, src, size);
	printf(" ---->  %s\n", dest);
	printf("Size of the copied string: %u\n", result);
	return (0);
}*/
