/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:09:13 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/01 03:04:41 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	string_argument(va_list	args, const char *para, int *len)
{
	char	*s;
	char	*str;
	int		j;

	s = va_arg(args, char *);
	if (!s)
	{
		j = 0;
		str = "(null)";
		while (j <= 5)
			*len += ft_putchar(str[j++]);
		para++;
	}
	else if (s[0] == '\0')
		return (-1);
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
