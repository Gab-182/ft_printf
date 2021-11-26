#include "ft_printf.h"

void     ft_putchar(int c)
{
     write (1, &c, 1);
}
/******************************************************/
void    ft_putstr(char *s)
{
	int i;

	i = 0;
    while (s[i])
    {
        ft_putchar(s[i]);
        i++;
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
size_t	ft_strlen(const char *s)
{
	size_t	n ;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
/******************************************************/
char	*ft_strjoin_edited(char *hexa_list, char hex)
{
	size_t	i;
	size_t	j;
	size_t	new_str_len;
	char	*new_str;

	i = 0;

	new_str_len = ft_strlen(hexa_list) + 1;
	new_str = (char *)malloc(new_str_len + 1);

	if (!hexa_list || !hex || !new_str)
		return (0);


	while (hexa_list[i] != '\0')
	{
		new_str[i] = hexa_list[i];
		i++;
	}
	new_str[i] = hex;
	i++;
	new_str[i] = '\0';
	return (new_str);
}
/******************************************************/
char 	*ft_str_reverse(char *hexa_list)
{  
    int		i;
	int		len;
	int		temp;

	i = 0;
    len = ft_strlen(hexa_list);

	while (i < len/2)
	{
		temp = hexa_list[i];  
        hexa_list[i] = hexa_list[len - i - 1];  
        hexa_list[len - i - 1] = temp;
		i++;
	}
	return (hexa_list);
}
/******************************************************/
char 	*ft_itoh(int num)
{
	char *hexa_list = "";

    int dev = 1;
	float dev_for_rem;
    double rem;
    double rem_mult_16;
    char hex;
    
    while (dev > 0)
    {
        dev = num / 16;
		dev_for_rem = (double)num / 16;
        rem = dev_for_rem - dev;
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
		else
		{
			hex = rem_mult_16 + '0';
		}
		hexa_list = ft_strjoin_edited(hexa_list, hex);
    }
	hexa_list = ft_str_reverse(hexa_list);
	ft_putstr(hexa_list);
	return (hexa_list);
}
/******************************************************/
int	ft_toupper(int n)
{
	if (n >= 97 && n <= 122)
	{
		return (n - 32);
	}
	else
	{
		return (n);
	}
}
/******************************************************/