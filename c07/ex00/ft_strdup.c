/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:45:19 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/27 15:34:17 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;

	int (size);
	int (i);
	size = 0;
	i = 0;
	while (src[size])
		size++;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_strdup("duplicate string"));
	return (0);
}*/
/*
> Determine the size of the string;
> Allocate the bytes necessary to write it
> If dest is NULL, return it
> While there's a string in src, copies it to dest
> Ends with null terminator and returns the copied string in dest
*/
