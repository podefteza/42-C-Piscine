/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:10:31 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/23 11:34:45 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main()
{
	int	number = 5;
	printf("The factorial of %d is %d\n",
		number, ft_recursive_factorial(number));
}

================ EXEMPLE FOR 5! ================
fact(5)
   ↓
   return 5 * fact(4)  	     5 * 24 = 120
      ↓			     ↑
      return 4 * fact(3)  	     4 * 6 = 24
         ↓			     ↑
         return 3 * fact(2)         3 * 2 = 6
            ↓                       ↑
            return 2 * fact(1)      2 * 1 = 2
            		  ↓         ↑
            		return   →  1
*/
