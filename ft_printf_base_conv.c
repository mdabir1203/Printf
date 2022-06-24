/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_base_conv.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:06:53 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/23 22:32:11 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_printf_base_num_conv.c
 * @brief This function is used to convert number from one base to another
 * 		  Ex: From Decimal to Hexadecimal and vice-versa.
 * 		  The logic is to divide a number with its base until the no is not
 * 		  divisible anymore and then we store the result inside our pointer.
 * 		  Also In 2nd Part we are checking with the flag to convert from lower
 * 		  case to uppercase in case of hexadecimal conversion.
 */
#include    "ft_printf.h"

int	ft_printf_base_conv(t_lluint n, size_t base, int flag)
{
	char	*ptr;
	int		input;
	char	char_num;

	input = 0;
	ptr = "0123456789abcdef";
	if (n >= base)
		input += ft_printf_base_conv(n / base, base, flag);
	char_num = ptr[n % base];
	if (flag == 0 && (char_num >= 'a' && char_num <= 'f'))
		input += write(1, &char_num, sizeof(char));
	else if (flag && (char_num >= 'a' && char_num <= 'f'))
	{
		char_num -= 32;
		input += write(1, &char_num, sizeof(char));
	}
	else
		input += write(1, &char_num, sizeof(char));
	return (input);
}

/*
int main()
{
  int a;
  a = 4322;
  ft_printf_base_num_conv(a,16,1);
  return(ft_printf_base_num_conv);
}
*/