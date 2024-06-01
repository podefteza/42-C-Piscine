/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:31:15 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/23 13:51:49 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int	main()
{
	int	nb = 5;
	int	power = 4;
	printf("%d ^ %d = %d\n", nb, power, ft_recursive_power(nb, power));
}

================ EXEMPLE FOR 5^4 ================
   5^4				      return 625
   ↓				      ↑
   return 5 * 5^3		      5 ^ 4 = 625
      ↓			      ↑
      return 5 * 5^2  	     	      5 ^ 3 = 125
         ↓			      ↑
         return 5 * 5^1              5 ^ 2 = 25
            ↓                        ↑
            return 5 * 5^0           5 ^ 1 = 5
            		 ↓           ↑
            		 return   →  1
*/
