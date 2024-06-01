/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:08:55 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/26 10:57:11 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	vector;
	int	i;

	vector = 1;
	while (argv[vector])
	{
		i = 0;
		while (argv[vector][i])
		{
			write(1, &argv[vector][i], 1);
			i++;
		}
		vector++;
		write(1, "\n", 1);
	}
	(void)argc;
}
