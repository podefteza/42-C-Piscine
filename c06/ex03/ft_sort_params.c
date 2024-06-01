/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:03:51 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/26 10:53:10 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	result = s1[i] - s2[i];
	return (result);
}

void	ft_sort_params(int argc, char *argv[])
{
	char	(*temp);

	int (vector);
	int (i);
	vector = 1;
	while (vector <= argc)
	{
		i = 0;
		while (argv[i] && argv[i + 1])
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
			i++;
		}
		vector++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	vector;

	ft_sort_params(argc, &argv[1]);
	vector = 1;
	(void)argc;
	while (argv[vector])
	{
		ft_putstr(argv[vector]);
		vector++;
		write(1, "\n", 1);
	}
	return (0);
}
