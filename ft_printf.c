/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:04:22 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/30 05:53:22 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_printf(const char *para, ...)
{
	int		l;
	int		*len;
	va_list	args;

	l = 0;
	len = &l;
	va_start (args, para);
	while (*para != '\0')
	{
		if (*para == '%')
		{
			para++;
			while (*para == ' ')
			{
				para++;
			}
			if (*para == '%')
			{
				*len += ft_putchar('%');
				para++;
			}
			else if (*para == 'd' || *para == 'i')
			{
				int d;
				d = va_arg(args, int);
				*len += ft_putnbr(d);
				para++;
			}
			else if (*para == 'u')
			{
				unsigned int u;
				u = va_arg(args, unsigned int);
				*len += ft_putnbr_unsigned(u);
				para++;
			}
			else if (*para == 'c')
			{
				int c;
				c = va_arg(args, int);
				*len += ft_putchar(c);
				para++;
			}
			else if (*para == 's')
			{
				char *s;
				char *str;
				int j;

				s = va_arg(args, char *);
				if (!s)
				{
					j = 0;
					str = "(null)";
					while (j <= 5)
						*len += ft_putchar(str[j++]);
					para++;
				}
				else
				{
					*len += ft_putstr(s);
					para++;
				}
			}
			else if (*para == 'x')
			{
				int num;
				num = va_arg(args, int);
				*len += ft_putnbr_x(num);
				para++;
			}
			else if (*para == 'X')
			{
				int		n;
				n = va_arg(args, int);
				*len += ft_putnbr_x_upper(n);
				para++;
			}
			else if (*para == 'p')
			{
				unsigned long long int pointer;
				pointer = va_arg(args, unsigned long long int);
				*len += ft_putstr("0x");
				*len += ft_putnbr_p(pointer);
				para++;
			}
		}
		else
		{
			*len += ft_putchar(*para);
			para++;
		}
	}
	va_end(args);
	return (*len);
}
