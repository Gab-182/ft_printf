/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:03:47 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/30 01:34:50 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s[i])
	{
		len += ft_putchar(s[i]);
		i++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int		len;

	len = 0;
	if (n <= 2147483647 && n >= -2147483648)
	{
		if (n < 0)
		{
			if (n == -2147483648)
				return (len += ft_putstr("-2147483648"));
			len += ft_putchar('-');
			n = n * -1;
		}
		if (n <= 9)
			len += ft_putchar(n + '0');
		if (n > 9)
		{
			len += ft_putnbr(n / 10);
			len += ft_putnbr(n % 10);
		}
	}
	return (len);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	int		len;

	len = 0;
	if (n >= 10)
	{
		len += ft_putnbr(n / 10);
		len += ft_putchar(n % 10 + '0');
	}
	else if (n < 10)
	{
		len += ft_putchar((char)(n + '0'));
	}
	return (len);
}
