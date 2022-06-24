/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointadd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:59:24 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/24 04:03:02 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_printf_pointadd.c
 * @brief This function is used for the printing of the pointer address
 * 		  i.e. %p. In this case  0x is used to say its a hexidecimal no.
 */
#include "ft_printf.h"

int	ft_printf_pointadd(void *ptr)
{
	int			input;
	t_lluint	p;

	input = 0;
	p = (t_lluint) ptr;
	input += write(1, "0x", 2);
	input += ft_printf_base_conv(p, 16, 0);
	return (input);
}
