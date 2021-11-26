#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char 	*ft_str_reverse(char *hexa_list);

char	*ft_strjoin_edited(char *hexa_list, char hex);

void    ft_putchar(int c);
void    ft_putstr(char *s);
void    ft_putnbr(int n);
void	ft_putnbr_unsigned(unsigned int n);
char	*ft_itoh(int num);

int     ft_toupper(int n);
void	ft_toupper_edited(char *str);
void    ft_printf(const char* para, ...);

#endif