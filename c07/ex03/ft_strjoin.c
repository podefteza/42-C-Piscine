/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 08:38:33 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/30 11:56:46 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcat_len(char **strs, int size, char *sep)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length = length + ft_strlen(strs[i]);
		i++;
	}
	length = length + (size - 1) * ft_strlen(sep) + 1;
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	int	idest;
	int	isrc;

	idest = 0;
	isrc = 0;
	while (dest[idest])
		idest++;
	while (src[isrc])
	{
		dest[idest + isrc] = src[isrc];
		isrc++;
	}
	dest[idest + isrc] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * ft_strcat_len(strs, size, sep));
	if (size == 0)
	{
		*str = 0;
		return (str);
		free(str);
	}
	if (str == NULL)
		return (NULL);
	*str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	int size = 5;
	char *strs[] = {"42", "Porto", "Piscine", "#", "9"};
	char sep[] = "==*==";
	char *result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(result);
	return (0);
}*/
/*
> in *ft_strjoin we call ft_strcat_len to get size of string and separator
> ft_strcat_len calls ft_strlen to get the length after concatenation
> We allocate that value to the memory
> If the size = 0 we return an empty string and free
> If there's an error allocating, returns NULL
> We then use ft_strcat to write the string concatenated to dest
> We use the strcat to join the strings to the separator
> The last string doesn't have a separator on its right
*/
