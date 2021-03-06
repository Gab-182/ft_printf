/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:04:17 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/03 22:15:40 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

/******************************************************************/
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_putnbr_x(unsigned int n);
int		ft_putnbr_x_upper(unsigned int n);
int		ft_putnbr_p(unsigned long long int n);
/******************************************************************/
int		ft_printf(const char *para, ...);
/******************************************************************/
int		string_argument(va_list	args, int *len);
int		integer_argument(va_list args, int *len);
int		hex_x_argument(va_list args, int *len);
int		hex_upper_argument(va_list args, int *len);
int		pointer_argument(va_list args, int *len);
int		unsigned_int_argument(va_list args, int *len);
int		character_argument(va_list args, int *len);
int		is_flag(char para);
/******************************************************************/
int		after_percent(va_list	args, char para_val, int *len);
/******************************************************************/
#endif
