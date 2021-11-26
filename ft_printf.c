#include "ft_printf.h"

void ft_printf(const char* para, ...)
{
    va_list  args;
	va_start (args, para);
	int i;

/* Looping in the flags*/
	i = 0;
	while (para[i] != '\0')
	{
		if (para[i] == 'd')
		{
			int d;
			d = va_arg(args, int);
			ft_putnbr(d);
		}
		else if(para[i] == 'i')
		{
			int i;
			i = va_arg(args, int);
			ft_putnbr(i);
		}
		else if(para[i] == '%' && para[i+1] == '%')
		{
			int percent;
			percent = va_arg(args,int);
			ft_putchar('%');
		}
		else if (para[i] == 'u')
		{
			unsigned int u;
			u = va_arg(args, unsigned int);
			ft_putnbr_unsigned(u);
		}
		else if (para[i] == 'c')
		{
			int c;
			c = va_arg(args, int);
			ft_putchar(c);
		}
		else if(para[i] == 's')
		{
			char *s;
			s = va_arg(args, char*);
			ft_putstr(s);
		}
		else if (para[i] == 'x')
		{
			int num;
			num = va_arg(args, int);
			ft_itoh(num);
		}
		i++;
	}
	va_end(args);
}