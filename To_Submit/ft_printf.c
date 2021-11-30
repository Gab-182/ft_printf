/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:04:22 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/30 10:09:10 by gabdoush         ###   ########.fr       */
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
				para++;
			if (*para == '%')
			{
				*len += ft_putchar('%');
				para++;
			}
			else if (*para == 'd' || *para == 'i')
			{
				integer_argument(args, para, len);
				para++;
			}
			else if (*para == 'u')
			{
				*len = unsigned_int_argument(args, para, len);
				para++;
			}
			else if (*para == 'c')
			{
				*len = character_argument(args, para, len);
				para++;
			}
			else if (*para == 's')
			{
				para++;
				*len = string_argument(args, para, len);
			}
			else if (*para == 'x' || *para == 'X')
			{
				if (*para == 'x')
				{
					para++;
					*len = hex_x_argument(args, para, len);
				}
				else if (*para == 'X')
				{
					para++;
					*len = hex_upper_argument(args, para, len);
				}
			}
			else if (*para == 'p')
			{
				para++;
				*len = pointer_argument(args, para, len);
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
