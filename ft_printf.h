/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:04:17 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/29 11:59:05 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int     ft_putchar(int c);
int     ft_putstr(char *s, int len);
int     ft_putnbr(int n, int len);
int     ft_putnbr_unsigned(unsigned int n, int len);
int     ft_putnbr_x(int n, int len);
int     ft_putnbr_X(int n, int len);
int     ft_putnbr_p(unsigned long long int n, int len);
int     ft_printf(const char* para, ...);

#endif
