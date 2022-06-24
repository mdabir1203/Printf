/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:35:55 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/24 14:57:35 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

typedef long long unsigned int	t_lluint;
//....... Helper Functions ..... //
size_t	ft_strlen(const char *s);
int		ft_printf_base_conv(t_lluint n, size_t base, int in_num);

//...... Format Specifier Functions .... // 
int		ft_printf_char(char c);
size_t	ft_printf_string(char *str);
int		ft_printf_pointadd(void *ptr);
int		ft_printf_int2decimal(int dec);
int		ft_printf_unint(unsigned int u_dec);
int		ft_printf_hexa(char char_x, unsigned int x);

// ...  Main Function ... // 
int		ft_printf(const char *s, ...);
#endif