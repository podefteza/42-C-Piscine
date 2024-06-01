/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:31:10 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/18 10:35:09 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
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
	char	upper[] = "UPPERCASEAZ";
	char	mix[] = "lowerANDupper";
	char	notalpha[] = "UPPER &%/ 123";
	char	empty[] = "";
	
	printf("%d\n", ft_str_is_uppercase(upper));
	printf("%d\n", ft_str_is_uppercase(mix));
	printf("%d\n", ft_str_is_uppercase(notalpha));
	printf("%d\n", ft_str_is_uppercase(empty));
}*/
