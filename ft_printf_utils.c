/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:03:47 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/29 11:26:58 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_putchar(int c, int len)
{
     write (1, &c, 1);
	 len++;
	 return (len);
}
/******************************************************/
int		ft_putstr(char *s, int len)
{
	int i;

	i = 0;
    while (s[i])
    {
        ft_putchar(s[i], len);
        i++;
    }
	return (len);
}
/******************************************************/
int	ft_putnbr(int n, int len)
{
		if (n <= 2147483647 && n >= -2147483648)
	{
		if (n < 0)
		{
			if (n == -2147483648)
				return (ft_putstr("-2147483648", len));
			ft_putchar('-', len);
			n = n * -1;
		}
		if (n <= 9)
			ft_putchar(n +'0', len);
		if (n > 9)
		{
			ft_putnbr(n / 10, len);
			ft_putnbr(n % 10, len);
		}
	}
	return (len);
}
/******************************************************/
int	ft_putnbr_unsigned(unsigned int n, int len)
{
    if (n >= 10)
	{
		ft_putnbr(n / 10, len);
		ft_putchar(n % 10 + '0', len);
	}
	else if (n < 10)
	{
		ft_putchar((char)(n + '0'), len);
	}
	return (len);
}
/******************************************************/
int	ft_putnbr_x(int n, int len)
{
		if (n <= 2147483647 && n >= -2147483648)
	{
		if (n < 0)
		{
			if (n == -2147483648)
				return (ft_putstr("-2147483648", len));
			ft_putchar('-', len);
			n = n * -1;
		}
		if (n <= 9)
			ft_putchar(n + '0', len);
		if (n > 16)
		{
			ft_putnbr_x(n / 16, len);
			ft_putnbr_x(n % 16, len);
		}
		if (n > 9 && n < 16)
		{
			ft_putchar(n + 87, len);
		}
	}
	return (len);
}
/******************************************************/
int	ft_putnbr_X(int n, int len)
{
		if (n <= 2147483647 && n >= -2147483648)
	{
		if (n < 0)
		{
			if (n == -2147483648)
				return (ft_putstr("-2147483648", len));
			ft_putchar('-', len);
			n = n * -1;
		}
		if (n <= 9)
			ft_putchar(n + '0', len);
		if (n > 16)
		{
			ft_putnbr_X(n / 16, len);
			ft_putnbr_X(n % 16, len);
		}
		if (n > 9 && n < 16)
		{
			ft_putchar(n + 55, len);
		}
	}
	return (len);
}
/******************************************************/
int	ft_putnbr_p(unsigned long long int n, int len)
{
		if (n <= 9)
			ft_putchar(n + '0', len);
		if (n > 16)
		{
			ft_putnbr_p(n / 16, len);
			ft_putnbr_p(n % 16, len);
		}
		if (n > 9 && n < 16)
		{
			ft_putchar(n + 87, len);
		}
	return (len);
}
/******************************************************/