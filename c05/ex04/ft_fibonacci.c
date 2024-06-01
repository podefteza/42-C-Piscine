/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:57:32 by carlos-j          #+#    #+#             */
/*   Updated: 2024/01/23 14:17:25 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	main()
{
	int	index = 8;
	printf("The %dth element of the Fibonacci sequence is %d\n",
		index, ft_fibonacci(index));
}

================ EXEMPLE FOR THE 8TH ELEMENT ================
   8 = 7 + 6				       8th element = 21
   ↓				      		 
   index 7 = 6 + 5		      		 13 + 8 = 21
      ↓			      		 ↑
      index 6 = 5 + 4  	     	      	 8 + 5 = 13
         ↓			      		 ↑
         index 5 = 4 + 3             		 5 + 3 = 8
            ↓                        		 ↑
            index 4 = 3 + 2           		 3 + 2 = 5
               ↓				 ↑
               index 3 = 2 + 1           	 2 + 1 = 3
            		 ↓ 			 ↑
            		index 2 = 1 + 0         1 + 1 = 2
            		        ↓       	↑
            		    index 1 = 1 + 0 → return 1 + 0 = 1
*/
