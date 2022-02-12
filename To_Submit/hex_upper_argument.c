/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_upper_argument.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:57:58 by gabdoush          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/13 15:42:56 by gabdoush         ###   ########.fr       */
=======
/*   Updated: 2021/12/23 03:45:05 by gabdoush         ###   ########.fr       */
>>>>>>> 1e22491c2c7da4f01d77153a4d57e9a3fdd94bb8
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_upper_argument(va_list args)
{
	int		num;
	int		len;

	len = 0;
	num = va_arg(args, int);
	len = ft_putnbr_x_upper(num);
	return (len);
<<<<<<< HEAD
}
=======
}
>>>>>>> 1e22491c2c7da4f01d77153a4d57e9a3fdd94bb8
