/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:10:21 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/03 20:38:48 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pointer_argument(va_list args, int *len)
{
	unsigned long long int		pointer;

	pointer = va_arg(args, unsigned long long int);
	*len += ft_putstr("0x");
	*len += ft_putnbr_p(pointer);
	return (*len);
}

int	unsigned_int_argument(va_list args, int *len)
{
	unsigned int	u;

	u = va_arg(args, unsigned int);
	*len += ft_putnbr_unsigned(u);
	return (*len);
}
