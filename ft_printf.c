/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:04:22 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/30 02:55:15 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *para, ...)
{
	int		len;
	int		i;
	va_list	args;

	len = 0;
	va_start (args, para);
	i = 0;
	while (para[i] != '\0')
	{
		if (para[i] == '%')
		{
			i++;
			while (para[i] == ' ')
			{
				i++;
			}
			if (para[i] == '%')
			{
				len += ft_putchar('%');
				i++;
			}
			else if (para[i] == 'd' || para[i] == 'i')
			{
				int d;
				d = va_arg(args, int);
				len += ft_putnbr(d);
				i++;
			}
			else if (para[i] == 'u')
			{
				unsigned int u;
				u = va_arg(args, unsigned int);
				len += ft_putnbr_unsigned(u);
				i++;
			}
			else if (para[i] == 'c')
			{
				int c;
				c = va_arg(args, int);
				len += ft_putchar(c);
				i++;
			}
			else if (para[i] == 's')
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
						len += ft_putchar(str[j++]);
					i++;
				}
				else
				{
					len += ft_putstr(s);
					i++;
				}
			}
			else if (para[i] == 'x')
			{
				int num;
				num = va_arg(args, int);
				len += ft_putnbr_x(num);
				i++;
			}
			else if (para[i] == 'X')
			{
				int		n;
				n = va_arg(args, int);
				len += ft_putnbr_x_upper(n);
				i++;
			}
			else if (para[i] == 'p')
			{
				unsigned long long int pointer;
				pointer = va_arg(args, unsigned long long int);
				len += ft_putstr("0x");
				len += ft_putnbr_p(pointer);
				i++;
			}
		}
		else
		{
			len += ft_putchar(para[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}
