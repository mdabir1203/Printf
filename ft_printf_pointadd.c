/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointadd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:59:24 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/23 23:09:25 by mabbas           ###   ########.fr       */
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
	int						input;
	unsigned long long int	ptr;

	input = 0;
	ptr = (unsigned long long int) p;
	input += write(1, "0x", 2);
	input += ft_printf_base_conv(ptr, 16, 0);
	return (input);
}
