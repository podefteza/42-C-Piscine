/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:37:29 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/22 20:11:08 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n && (s1[i] == s2[i])) && s1[i] != '\0')
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
	char s1[] = "ABCD";
	char s2[] = "ABC";
	int n = 3;
	int result = ft_strncmp(s1, s2, n);
	printf("Comparing the first %d bytes of %s vs %s: %d\n",
		n, s1, s2, result);
	
	char s3[] = "ABCD";
	char s4[] = "ABCE";
	int n2 = 10;
	int result2 = ft_strncmp(s3, s4, n2);
	printf("Comparing the first %d bytes of %s vs %s: %d\n",
		n2, s3, s4, result2);
	
	char s5[] = "42";
	char s6[] = "42 Porto";
	int n3 = 2;
	int result3 = ft_strncmp(s5, s6, n3);
	printf("Comparing the first %d bytes of %s vs %s: %d\n",
		n3, s5, s6, result3);
	
	char s7[] = "Teste1";
	char s8[] = "Teste";
	int n4 = 6;
	int result4 = ft_strncmp(s7, s8, n4);
	printf("Comparing the first %d bytes of %s vs %s: %d\n",
		n4, s7, s8, result4);
	
	char s9[] = "\0";
	char s10[] = "TestNULL";
	int n5 = 6;
	int result5 = ft_strncmp(s9, s10, n5);
	printf("Comparing the first %d bytes of %s vs %s: %d\n",
		n5, s9, s10, result5);	
	
	return (0);
}*/
