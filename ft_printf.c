/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:04:22 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/28 11:48:19 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printf(const char* para, ...)
{
    va_list  args;
	va_start (args, para);
	int i;

/* Looping in the flags*/
	i = 0;
	while (para[i] != '\0')
	{
		if (para[i] == 'd')
		{
			int d;
			d = va_arg(args, int);
			ft_putnbr(d);
		}
		else if (para[i] == 'i')
		{
			int i;
			i = va_arg(args, int);
			ft_putnbr(i);
		}
		else if (para[i] == '%' && para[i+1] == '%')
		{
			int percent;
			percent = va_arg(args,int);
			ft_putchar('%');
		}
		else if (para[i] == 'u')
		{
			unsigned int u;
			u = va_arg(args, unsigned int);
			ft_putnbr_unsigned(u);
		}
		else if (para[i] == 'c')
		{
			int c;
			c = va_arg(args, int);
			ft_putchar(c);
		}
		else if (para[i] == 's')
		{
			char *s;
			s = va_arg(args, char*);
			ft_putstr(s);
		}
		else if (para[i] == 'x')
		{
			int num;
			num = va_arg(args, int);
			ft_putnbr_x(num);
		}
		else if (para[i] == 'X')
		{
			int num;
			num = va_arg(args, int);
			ft_putnbr_X(num);
		}
		else if (para[i] == 'p')
		{
			unsigned long long int pointer;
			pointer = va_arg(args, unsigned long long int);
			ft_putstr("0x");
			ft_putnbr_p(pointer);
		}
		i++;
	}
	va_end(args);
}