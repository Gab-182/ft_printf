/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:04:22 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/29 13:47:16 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char* para, ...)
{
	int len;
	len = 0;
	/**
	 * para ---> is a character pointer that will point to all
	 * 			 the arguments that will be passed to the ft_printf()
	 * 			 function.
	*/

	/* va_list ----> using this to define the list of arguments */
    va_list  args;
	/* va-start ----> to start the argument list. */
	va_start (args, para);
	int i;

/* Looping in the arguments*/
	i = 0;
	
	while (para[i] != '\0')
	{
	/********************************/	
		if (para[i] == '%')
		{
			i++;
			while (para[i] == ' ')
			{
				i++;
			}
			if (para[i] == '%')
			{
				ft_putchar('%');
				i++;
			}
			else if (para[i] == 'd' || para[i] == 'i')
			{
				int d;
				d = va_arg(args, int);
				len += ft_putnbr(d, len);
				i++;
			}
			else if (para[i] == 'u')
			{
				unsigned int u;
				u = va_arg(args, unsigned int);
				ft_putnbr_unsigned(u, len);
				i++;
			}
			else if (para[i] == 'c')
			{
				int c;
				c = va_arg(args, int);
				ft_putchar(c);
				i++;
			}
			else if (para[i] == 's')
			{
				char *s;
				s = va_arg(args, char*);
				ft_putstr(s, len);
				i++;
			}
			else if (para[i] == 'x')
			{
				int num;
				num = va_arg(args, int);
				ft_putnbr_x(num, len);
				i++;
			}
			else if (para[i] == 'X')
			{
				int num;
				num = va_arg(args, int);
				ft_putnbr_X(num, len);
				i++;
			}
			else if (para[i] == 'p')
			{
				/**
				 *     <<<<<<<<<<<<<IMPORTANT>>>>>>>>>>>>>
				 * Check if you need to change the (p) type from
				 * [unsigned long long int] ----> [void *]
				 *     <<<<<<<<<<<<<IMPORTANT>>>>>>>>>>>>>
				*/
				unsigned long long int pointer;
				pointer = va_arg(args, unsigned long long int);
				ft_putstr("0x", len);
				ft_putnbr_p(pointer, len);
				i++;
			}
			else if (para[i] == '#')
			{
				i++;
				while (para[i] != '\0')
				{
					if (para[i] == 'x')
					{
						int num;
						num = va_arg(args, int);
						ft_putstr("0x", len);
						ft_putnbr_x(num, len);
						i++;
						break;
					}
					else if (para[i] == 'X')
					{
						int num;
						num = va_arg(args, int);
						ft_putstr("0x", len);
						ft_putnbr_X(num, len);
						i++;
						break;
					}
					else
						i++;
				}
			}
		}
		else
		{
			len += ft_putchar(para[i]);
			i++;
		}
	/********************************/
	}
	va_end(args);
	return (len);
}
