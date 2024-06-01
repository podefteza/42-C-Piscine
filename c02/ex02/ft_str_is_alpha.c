/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 08:32:26 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/22 13:22:59 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	char	str[] = "Hello";
	printf("%d\n", ft_str_is_alpha(str));

	char	notalpha[] = "Hello 42";
	printf("%d\n", ft_str_is_alpha(notalpha));

	char	allalpha[] = "Thequickbrownfoxjumpsoverthelazydog";
	printf("%d\n", ft_str_is_alpha(allalpha));
	
	char	a[] = "42";
	printf("%d\n", ft_str_is_alpha(a));
	
	char	aa[] = "";
	printf("%d\n", ft_str_is_alpha(aa));
	
	char	aaa[] = "-10\n";
	printf("%d\n", ft_str_is_alpha(aaa));
}*/
