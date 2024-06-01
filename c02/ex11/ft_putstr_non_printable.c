/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:50:32 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/30 19:08:45 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;

	int (i);
	i = 0;
	hex = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			write(1, &hex[(str[i] / 16) % 16], 1);
			write(1, &hex[str[i] % 16], 1);
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putstr_non_printable("This is\ta test of\nft_putstr_non_printable");
	printf("\n");
	ft_putstr_non_printable("\a \b \t \n \v \f \r");
	printf("\n");
	return (0);
}*/
/* Exemple of writing \n (decimal 10)
	writes --> \\ because only one backslash is an escape character --> \
	writes (10/16)%16 = 0.625 --> char in index 0 in the hex array --> 0
	writes 10%16 = 10 --> char in index 10 in the hex array --> a
*/
