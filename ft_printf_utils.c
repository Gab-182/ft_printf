#include "ft_printf.h"

void     ft_putchar(int c)
{
     write (1, &c, 1);
}
/******************************************************/
void    ft_putstr(char *s)
{
    while (*s)
    {
        ft_putchar(*s);
        s++;
    }
}
/******************************************************/
void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n = -1 * n;
		ft_putnbr(n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else if (n < 10)
	{
		ft_putchar((char)(n + '0'));
	}
}
/******************************************************/
void	ft_putnbr_unsigned(unsigned int n)
{
    if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else if (n < 10)
	{
		ft_putchar((char)(n + '0'));
	}
}
/******************************************************/
void ft_itoh(int num)
{
    int dev;
    int rem;
    int rem_mult_16;
    char hex;
    
    while (dev > 0)
    {
        dev = num/16;
        rem = num % 16;
        printf("dev is : %d\n", dev);
        printf("rem is : %d\n", rem);
        num = dev;
        rem_mult_16 = rem * 16;
        if (rem_mult_16 > 9)
        {
            if (rem_mult_16 == 10 )
            {
                hex = 'a';
            }
            else if (rem_mult_16 == 11 )
            {
                hex = 'b';
            }
            else if (rem_mult_16 == 12 )
            {
                hex = 'c';
            }
            else if (rem_mult_16 == 13 )
            {
                hex = 'd';
            }
            else if (rem_mult_16 == 14 )
            {
                hex = 'e';
            }
            else if (rem_mult_16 == 15 )
            {
                hex = 'f';
            }
        }

    }
}