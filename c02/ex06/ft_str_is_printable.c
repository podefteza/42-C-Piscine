/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:31:10 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/18 10:48:52 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char	print1[] = "This is printable 123?=)(/&%$";
	char	print2[] = "This is not \n";
	char	print3[] = "This is not \t \b \r \a etc...";
	char	empty[] = "";
	
	printf("%d\n", ft_str_is_printable(print1));
	printf("%d\n", ft_str_is_printable(print2));
	printf("%d\n", ft_str_is_printable(print3));
	printf("%d\n", ft_str_is_printable(empty));
}*/
