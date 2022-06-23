/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int2decimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:31:28 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/23 15:54:03 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_printf_int2decimal.c
 * @brief This function is used to format specify the integer
 * 		  to decimal conversion(%d). The base is 10 for decimal.
 */
#include "ft_printf.h"

int	ft_printf_int2decimal(int dec)
{
	int	i;

	i = 0;
	if (i < 0)
	{
		if (i < -2147483647)
		{
			i += write(1, "-2147483648", 11);
			return (i);
		}
		i += write(1, "-", 1);
		dec = dec * -1;
	}
	i += ft_printf_nbr_base(i, 10, 0);
	return (i);
}
