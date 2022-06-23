/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int2decimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:31:28 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/23 23:01:46 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_printf_int2decimal.c
 * @brief This function is used to format specify the integer
 * 		  to decimal conversion(%d). The base is 10 for decimal.
 * 		  We had to check for the max range of Integers and 
 * 		  also negative values
 * 		  for which we used the if statement
 */			
#include "ft_printf.h"

int	ft_printf_int2decimal(int dec)
{
	int	input;

	input = 0;
	if (dec < 0)
	{
		if (dec < -2147483647)
		{
			input += write(1, "-2147483648", 11);
			return (input);
		}
		input += write(1, "-", 1);
		dec *= -1;
	}
	input += ft_printf_nbr_base(dec, 10, 0);
	return (input);
}
