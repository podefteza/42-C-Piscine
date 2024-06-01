/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:37:29 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/22 16:03:16 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	sizedest;
	int	i;

	sizedest = 0;
	i = 0;
	while (dest[sizedest] != '\0')
		sizedest++;
	while (src[i] != '\0')
	{
		dest[sizedest] = src[i];
		i++;
		sizedest++;
	}
	dest[sizedest] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char	src[] = "Porto";
	char	dest[20] = "42";

	printf("Source: %s\n", src);
	printf("Destiny: %s\n", dest);
	printf("New destiny: %s\n", ft_strcat(dest, src));
	return (0);
}*/
