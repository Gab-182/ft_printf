/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:04:22 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/28 20:13:00 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printf(const char* para, ...)
{
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
		if (para[i] == ' ')
		{
			ft_putchar(' ');
		}
		if (para[i] == '%')
		{
			i++;
			int j = i;
			while (para[j] != '0')
			{
				if (para[j] == '%')
					ft_putchar('%');
					break;
				j++;
			}
			if (para[i] == ' ')
			{
				i++;
			}
			else if (para[i] == 'd')
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
		}
		else
		{
			ft_putchar(para[i]);
		}
	/********************************/
		i++;
	}
	va_end(args);
}
