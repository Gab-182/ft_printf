#include "ft_printf.h"

void     ft_putchar(int c)
{
     write (1, &c, 1);
}

void    ft_putstr(char *s)
{
    while (*s)
    {
        ft_putchar(*s);
        s++;
    }
}

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

// void	ft_bzero(void *dest, size_t len)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < len)
// 	{
// 		((unsigned char *)dest)[i] = 0;
// 		i++;
// 	}
// }

// size_t	ft_intlen(int num)
// {
// 	size_t	i;

// 	i = 1;
// 	num = num / 10;
// 	while (num)
// 	{
// 		i++;
// 		num = num / 10;
// 	}
// 	return (i);
// }

// char	*ft_itoa(int n)
// {
// 	char			*str;
// 	size_t			intlen;
// 	unsigned int	num_copy;

// 	intlen = ft_intlen(n);
// 	num_copy = n;
// 	if (n < 0)
// 	{
// 		num_copy = -1 * n;
// 		intlen++;
// 	}
// 	str = (char *)malloc(sizeof(char) * intlen + 1);
// 	ft_bzero(str, intlen + 1);
// 	if (!str)
// 		return (NULL);
// 	str[--intlen] = num_copy % 10 + '0';
// 	num_copy = num_copy / 10;
// 	while (num_copy)
// 	{
// 		str[--intlen] = num_copy % 10 + '0';
// 		num_copy = num_copy / 10;
// 	}
// 	if (n < 0)
// 		*(str + 0) = '-';
// 	return (str);
// }

void	ft_itoh(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-80000000");
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n = -1 * n;
		ft_putnbr(n);
	}
	else if (n > 9 && n < 16)
	{
		if (n == 10)
			ft_putchar('a');
		if (n == 11)
			ft_putchar('b');
		if (n == 12)
			ft_putchar('c');
		if (n == 13)
			ft_putchar('d');
		if (n == 14)
			ft_putchar('e');
		if (n == 15)
			ft_putchar('f');
	}
	else if (n > 16)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else if (n < 10)
	{
		ft_putchar((char)(n + '0'));
	}

}