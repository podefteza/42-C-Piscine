/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erfernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:04:36 by erfernan          #+#    #+#             */
/*   Updated: 2024/01/14 18:04:42 by erfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int print);

void	print_corner(int i, int j, int x, int y)
{
	if ((i == 0 || i == y - 1) && (j == 0 || j == x - 1))
	{
		ft_putchar('o');
	}
	else if (i == 0 || i == y - 1)
	{
		ft_putchar('-');
	}
	else if (j == 0 || j == x - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	print_pattern_line(int i, int x, int y)
{
	int	j;

	j = 0;
	while (j < x)
	{
		print_corner(i, j, x, y);
		j++;
	}
	ft_putchar('\n');
}

int	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		ft_putchar('e');
		return (0);
	}
	while (i < y)
	{
		print_pattern_line(i, x, y);
		i++;
	}
	return (0);
}
