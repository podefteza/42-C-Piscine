/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erfernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:04:08 by erfernan          #+#    #+#             */
/*   Updated: 2024/01/14 18:04:14 by erfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int print)
{
	if (print == 'e')
	{
		write(1, "Error. The values of x and y have to be a number > 0\n", 55);
	}
	else
	{
		write(1, &print, 1);
	}
}
