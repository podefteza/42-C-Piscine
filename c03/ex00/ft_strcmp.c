/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:18:58 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/22 20:05:23 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
	int	result;
	char s1[] = "ABC";
	char s2[] = "ABC";

	result = ft_strcmp(s1, s2);
	printf("%s vs %s = %d\n", s1, s2, result);
	
	char s3[] = "ABC";
	char s4[] = "AB";
	result = ft_strcmp(s3, s4);
	printf("%s vs %s = %d\n", s3, s4, result);
	
	char s5[] = "";
	char s6[] = "TestNULL";
	result = ft_strcmp(s5, s6);
	printf("%s vs %s = %d\n", s5, s6, result);	
	
	return (0);
}*/
