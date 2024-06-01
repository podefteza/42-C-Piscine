/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:18:45 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/18 14:27:46 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str[] = "Hello World!";
	printf("%s\n", ft_strlowcase(str));
	char	nochanges[] = "MiX oF UpPer aND DiGitS #0123*";
	printf("%s\n", ft_strlowcase(nochanges));
	char	empty[] = "";
	printf("%s\n", ft_strlowcase(empty));
}*/
