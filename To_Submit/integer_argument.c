/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_argument.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/13 09:56:25 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/15 01:44:05 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/12/23 03:47:56 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/23 03:51:02 by gabdoush         ###   ########.fr       */
>>>>>>> 1e22491c2c7da4f01d77153a4d57e9a3fdd94bb8
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
<<<<<<< HEAD
 
=======
>>>>>>> 1e22491c2c7da4f01d77153a4d57e9a3fdd94bb8
