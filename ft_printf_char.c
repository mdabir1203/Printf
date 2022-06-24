/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:22:12 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/24 04:08:02 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 @file  ft_printf_char.c
 @brief This Functions is a format specifier for character 
		in printf functions ( %c)
**/
#include "ft_printf.h"

int	ft_printf_char(char c)
{
	write(1, &c, 1);
	return (1);
}
