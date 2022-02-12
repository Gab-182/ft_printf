/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:09:13 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/03 21:20:45 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	string_argument(va_list	args, int *len)
{
	char	*s;
	char	*str;

	s = va_arg(args, char *);
	if (!s)
	{
		str = "(null)";
		*len += ft_putstr(str);
		return (*len);
	}
	else
		*len += ft_putstr(s);
	return (*len);
}

int	integer_argument(va_list args, int *len)
{
	int		d;

	d = va_arg(args, int);
	*len += ft_putnbr(d);
	return (*len);
}

int	character_argument(va_list args, int *len)
{
	int		c;

	c = va_arg(args, int);
	*len += ft_putchar(c);
	return (*len);
}

int	hex_x_argument(va_list args, int *len)
{
	int		num;

	num = va_arg(args, int);
	*len += ft_putnbr_x(num);
	return (*len);
}

int	hex_upper_argument(va_list args, int *len)
{
	int		num;

	num = va_arg(args, int);
	*len += ft_putnbr_x_upper(num);
	return (*len);
}
