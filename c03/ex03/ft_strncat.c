/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:37:29 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/24 11:24:15 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	destsize;
	unsigned int	srccat;

	destsize = 0;
	i = 0;
	srccat = 0;
	while (dest[destsize] != '\0')
		destsize++;
	while (src[i] != '\0' && srccat < nb)
	{
		dest[destsize] = src[i];
		destsize++;
		srccat++;
		i++;
	}
	dest[destsize] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char	dest[] = "Hello";
	char	src[] = "World";
	unsigned int nb = 2;

	printf("Source: '%s' --> Destiny: '%s', concatenate to size of dest = %d:",
		src, dest, nb);
	printf(" %s\n", ft_strncat(dest, src, nb));
	return (0);
}*/
