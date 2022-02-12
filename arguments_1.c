/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:09:13 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/01 04:04:44 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	string_argument(va_list	args, const char *para, int *len)
{
	char	*s;
	char	*str;

	s = va_arg(args, char *);
	if (!s)
	{
		str = "(null)";
		*len += ft_putstr(str);
		para++;
	}
	else
	{
		*len += ft_putstr(s);
		para++;
	}
	return (*len);
}

int	integer_argument(va_list args, const char *para, int *len)
{
	int		d;

	d = va_arg(args, int);
	*len += ft_putnbr(d);
	para ++;
	return (*len);
}

int	character_argument(va_list args, const char *para, int *len)
{
	int		c;

	c = va_arg(args, int);
	*len += ft_putchar(c);
	para++;
	return (*len);
}

int	hex_x_argument(va_list args, const char *para, int *len)
{
	int		num;

	num = va_arg(args, int);
	*len += ft_putnbr_x(num);
	para++;
	return (*len);
}

int	hex_upper_argument(va_list args, const char *para, int *len)
{
	int		num;

	num = va_arg(args, int);
	*len += ft_putnbr_x_upper(num);
	para++;
	return (*len);
}
