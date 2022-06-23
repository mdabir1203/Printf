/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:44:43 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/23 22:56:46 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_printf_unint.c
 * @brief This function is used to specify the formats for unsigned integers
 * 		  (%u) -->>
 */
#include "ft_printf.h"

int	ft_printf_unint(unsigned int u_dec)
{
	int	input;

	input = 0;
	input += ft_printf_base_num_conv(u_dec, 10, 0);
	return (input);
}
