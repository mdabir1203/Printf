/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:48:07 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/23 23:12:33 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_printf_hexa.c
 * @brief This is used to format specify the unsigned int to
 * 		  hexadecimal characters.
 *        %x is used for lowercase and %X is used for uppercase
 * 		  Here x is the input unsigned integer from which we convert
 */
#include "ft_printf.h"

int	ft_printf_hexa(char char_x, unsigned int x)
{
	int	input;

	input = 0;
	if (char_x == 'x')
	{
		input += ft_printf_base_num_conv(x, 16, 1);
	}
	else if (char_x == 'X')
	{
		input += ft_printf_base_num_conv(x, 16, 1);
	}
	return (input);
}
