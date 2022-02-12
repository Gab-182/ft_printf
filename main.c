#include <stdio.h>
#include "ft_printf.h"
// #include "ft_printf.c"
// # include "ft_printf_utils_1.c"
// # include "ft_printf_utils_2.c"
// # include "arguments_1.c"
// # include "arguments_2.c"


int main()
{

	int d = -1;
	// int i = 123456;
	// int x = -1;
	// int X = 12345678;
	// unsigned long int p = 12345678;
	// /**
	//  * The max value for unsigned int is : 4,294,967,295
	//  * if you put 4,294,967,296 
	//  * there will be a overflow in the value of unsigned int and
	//  * it will print (0).
	// */
	// unsigned int u = 429496725;
	// char c = 'W';

	char *s = NULL;
	char *str = "hello world";

	ft_printf("%string\n", str);
	ft_printf("%#string\n", str);
	ft_printf("%+string\n", str);
	ft_printf("%hello\n", d);
	ft_printf("%s\n", s);
	ft_printf("%s", "");
	printf("\n");
	ft_printf(" NULL %s NULL ", NULL);
	printf("\n");
	ft_printf("%s ", "");
	printf("\n");

	// ft_printf("%s\n", "batya");

	// ft_printf("\n");
	// int q = ft_printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
	// int w = printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
	// printf("ft_printf = %d\nprintf = %d\n", q, w);

// /*********** Decimal ************/
// 	ft_printf("%d 1234123S42134   12341234   12341234     ",d);
// 	ft_printf("\n");
	// printf("%d 1234123S42134   12341234   12341234 ", d);
// 	printf("\n\n");
// /************* char *************/
// 	ft_printf("%c 123412342134   12341234   12341234", c);
// 	printf("\n");
// 	printf("%c 123412342134   12341234   12341234", c);
// 	printf("\n\n");
// /*********** Integer ************/
// 	ft_printf("%i", 123456);
// 	printf("\n");
// 	printf("%i", 123456);
// 	printf("\n\n");
// /*********** String *************/
// 	ft_printf("%s", s);
// 	printf("\n");
// 	printf("%s", s);
// 	printf("\n\n");
// /****** unsigned integer ********/
// 	ft_printf("%u", u);
// 	printf("\n");
// 	printf("%u", u);
// 	printf("\n\n");
// /*********** percent ************/
//     ft_printf("%%");
// 	printf("\n");
// 	printf("%%");
// 	printf("\n\n");
// /******** hexadecimal x *********/
// 	ft_printf("%x", x);
// 	printf("\n\n");
// 	printf("%x", x);
// 	printf("\n");
// /******** hexadecimal X *********/
// 	ft_printf("%X", X);
// 	printf("\n");
// 	printf("%X", X);
// 	printf("\n\n");
// /********* Pointer **************/
// 	ft_printf("%p", d);
// 	printf("\n");
// 	printf("%p", d);
// 	printf("\n\n");
// /********************************/
// printf("<<<<<<<<<<<<<<<<  TESTING  >>>>>>>>>>>>>>>>>>>\n\n");
// printf("ft_printf is (int) :\n");

// int mine = ft_printf("123 %% %% WW 123 WW%d %c %s %i %u %x %%  %% %p", d, c, s, i, u, x, &p);
// printf("\n\n");
// printf("ft_printf is (int) :\n");

// int original = printf("123 %% %% WW 123 WW% d % c %s %i %u %x %%  %% %p", d, c, s, i, u, x, &p);
// printf("\n\n");
// printf("ft_printf ---->  %d\nprintf ------->  %d\n", mine, original);
// printf("\n\n");
// printf("<<<<<<<<<<<<<<<<  TESTING  >>>>>>>>>>>>>>>>>>>\n");

// ft_printf("123 %% %% WW 123 WW !@# %d %c %s %i %u %x %%  %% %p", d, c, s, i, u, x,&p);
// printf("\n");
// int g = printf("123 %% %% WW 123 WW !@# %d %c %s %i %u %x %%  %% %p", d, c, s, i, u, x,&p);
// printf("\n\n");

	return (0);

}