/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:12:04 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/18 10:23:57 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	lower[] = "lowercase";
	char	mix[] = "lowerANDupper";
	char	notalpha[] = "lower &%/ 123";
	char	empty[] = "";
	
	printf("%d\n", ft_str_is_lowercase(lower));
	printf("%d\n", ft_str_is_lowercase(mix));
	printf("%d\n", ft_str_is_lowercase(notalpha));
	printf("%d\n", ft_str_is_lowercase(empty));
}*/
