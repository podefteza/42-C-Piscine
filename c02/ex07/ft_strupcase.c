/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:49:57 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/18 14:16:56 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str[] = "Hello world!";
	printf("%s\n", ft_strupcase(str));
	char	nochanges[] = "ONLY UPPER AND NUMBERS # 000000 *";
	printf("%s\n", ft_strupcase(nochanges));
	char	empty[] = "";
	printf("%s\n", ft_strupcase(empty));
}*/
