#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(int c);
void    ft_putstr(char *s);
void    ft_putnbr(int n);
void	ft_putnbr_unsigned(unsigned int n);
void	ft_itoh(int n);
void    ft_printf(const char* para, ...);

#endif