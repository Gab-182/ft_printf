/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 01:28:58 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/30 09:58:58 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_x(unsigned int n)
{
	int		len;

	len = 0;
	if (n <= 9 && n >= 0)
		len += ft_putchar(n + '0');
	if (n > 15)
	{
		len += ft_putnbr_x(n / 16);
		len += ft_putnbr_x(n % 16);
	}
	if (n > 9 && n < 16)
	{
		len += ft_putchar(n + 87);
	}
	return (len);
}

int	ft_putnbr_x_upper(unsigned int n)
{
	int		len;

	len = 0;
	if (n <= 9 && n >= 0)
		len += ft_putchar(n + '0');
	if (n > 15)
	{
		len += ft_putnbr_x_upper(n / 16);
		len += ft_putnbr_x_upper(n % 16);
	}
	if (n > 9 && n < 16)
	{
		len += ft_putchar(n + 55);
	}
	return (len);
}

int	ft_putnbr_p(unsigned long long int n)
{
	int		len;

	len = 0;
	if (n <= 9 && n >= 0)
		len += ft_putchar(n + '0');
	if (n > 15)
	{
		len += ft_putnbr_p(n / 16);
		len += ft_putnbr_p(n % 16);
	}
	if (n > 9 && n < 16)
	{
		len += ft_putchar(n + 87);
	}
	return (len);
}
