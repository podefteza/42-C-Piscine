/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:25:28 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/18 10:10:58 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 48 || str[i] > 57))
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
	char	str[] = "42";
	char	notnumeric[] = "Porto";
	char	numericandalpha[] = "42 Porto";
	char	empty[] = "";

	printf("%d\n", ft_str_is_numeric(str));
	printf("%d\n", ft_str_is_numeric(notnumeric));
	printf("%d\n", ft_str_is_numeric(numericandalpha));
	printf("%d\n", ft_str_is_numeric(empty));
}*/
