/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:30:13 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/22 13:45:13 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[0] >= 'a' && str[0] <= 'z'))
			str[0] = str[0] - 32;
		if ((str[i] >= 0 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64)
			|| (str[i] >= 91 && str[i] <= 96)
			|| (str[i] >= 123 && str[i] <= 127))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char str[] = "P?A,Leu3x4tn!O 7@,     Trt[Vjy1i";
	printf("%s\n", ft_strcapitalize(str));
	
	char str2[] = "A5mjy1p-Bw>Lnz?<([Sj'.|O#`M!";
	printf("%s\n", ft_strcapitalize(str2));
	
	char str3[] = "-(gad~3b Z~D)Icw`H_";
	printf("%s\n", ft_strcapitalize(str3));
	
	char str4[] = "a";
	printf("%s\n", ft_strcapitalize(str4));
	
	char str5[] = "";
	printf("%s\n", ft_strcapitalize(str5));
}*/
