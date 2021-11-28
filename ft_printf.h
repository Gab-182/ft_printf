/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:04:17 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/28 11:39:55 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(int c);
void    ft_putstr(char *s);
void    ft_putnbr(int n);
void	ft_putnbr_unsigned(unsigned int n);
void	ft_putnbr_x(int n);
void	ft_putnbr_X(int n);
void	ft_putnbr_p(unsigned long long int n);

void    ft_printf(const char* para, ...);

#endif