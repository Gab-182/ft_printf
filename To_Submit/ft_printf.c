/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:04:22 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/01 00:48:39 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	after_percent(va_list	args, const char *para, int *len)
{
	// while (*para == ' ')
	// 	para++;
	if (*para == '%')
		*len += ft_putchar('%');
	else if (*para == 'd' || *para == 'i')
		integer_argument(args, para, len);
	else if (*para == 'u')
		*len = unsigned_int_argument(args, para, len);
	else if (*para == 'c')
		*len = character_argument(args, para, len);
	else if (*para == 's')
		*len = string_argument(args, para, len);
	else if (*para == 'x' || *para == 'X')
	{
		if (*para == 'x')
			*len = hex_x_argument(args, para, len);
		else if (*para == 'X')
			*len = hex_upper_argument(args, para, len);
	}
	else if (*para == 'p')
		*len = pointer_argument(args, para, len);
	return (*len);
}

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
			*len = after_percent(args, para, len);
			// para++;
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
