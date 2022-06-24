/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 00:05:10 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/24 04:07:35 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_format_cases(const char **str, va_list args)
{
	int	print_out;

	print_out = 0;
	if (*(*str + 1) == 'c')
		print_out += ft_printf_char((char) va_arg(args, int));
	else if (*(*str + 1) == 's')
		print_out += ft_printf_string(va_arg(args, void *));
	else if (*(*str + 1) == 'p')
		print_out += ft_printf_pointadd(va_arg(args, char *));
	else if (*(*str + 1) == 'd' || (*(*str + 1) == 'i'))
		print_out += ft_printf_int2decimal(va_arg(args, int));
	else if (*(*str + 1) == 'u')
		print_out += ft_printf_unint(va_arg(args, unsigned int));
	else if (*(*str + 1) == 'x' || (*(*str + 1) == 'X'))
		print_out += ft_printf_hexa(*(*str + 1), va_arg(args, unsigned int));
	else if (*(*str + 1) == '%')
		print_out += ft_printf_char((int) '%');
	return (print_out);
}

int	printf(const char *s, ...)
{
	int		print_out;
	va_list	args;

	print_out = 0;
	if (s == NULL || s == 0)
		return (0);
	va_start(args, s);
	while (*s != '\0')
	{
		if (*s == '%')
		{
			print_out += ft_printf_format_cases(&s, args);
			s++;
		}
		else
			write(1, s, sizeof(s));
			print_out++;
		s++;
	}
	va_end(args);
	return (print_out);
}
