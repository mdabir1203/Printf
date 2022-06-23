/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:40:45 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/23 22:56:18 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

size_t	ft_printf_string(char *str)
{
	size_t	input;

	input = 0;
	if (str == NULL || str == 0)
		input += write(1, "(null)", 6);
	else
		input += write(1, str, ft_strlen(str));
}
