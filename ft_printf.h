/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:35:55 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/23 14:23:07 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

//....... Helper Functions ..... //

size_t	ft_strlen(const char *s);
int		ft_printf_nbr_base(size_t n, size_t base, int c);

//...... Format Specifier Functions .... // 

int		ft_printf_char(char c);
size_t	ft_printf_string(char *s);
int		ft_printf_pointer(void *p);
int		ft_printf_digits(int d);
int		ft_printf_unint(unsigned int d);
int		ft_printf_hexa(char x_chr, unsigned int x);

// ...  Main Function ... // 
int		ft_printf(const char *s, ...);

