/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_argument.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:56:25 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/15 01:44:05 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	integer_argument(va_list args)
{
	int		d;
	int		len;

	len = 0;
	d = va_arg(args, int);
	len = ft_putnbr(d);
	return (len);
}
 