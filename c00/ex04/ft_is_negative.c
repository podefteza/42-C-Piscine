/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:36:09 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/11 17:27:34 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	if (n < 0)
	{
		write(1, &neg, 1);
	}
	else
	{
		write(1, &pos, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(10);
	return (0);
}*/
