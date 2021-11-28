#include "ft_printf.h"
// #include "ft_printf.c"
// # include "ft_printf_utils.c"

int main()
{
 	int d = 123;
	int i = 123456;
	int x = 12345678;
	int X = 12345678;
	unsigned long long int p = 12345678;
	/**
	 * The max value for unsigned int is : 4,294,967,295
	 * if you put 4,294,967,296 
	 * there will be a overflow in the value of unsigned int and
	 * it will print (0).
	*/
	unsigned int u = 429496725;
	char c = 'W';
	char *str = "  Ghaiath Abdoush  ";

// /*********** Decimal ************/
// 	ft_printf("%d ", d);
// 	printf("\n");
// /************* char *************/
// 	ft_printf("%c", c);
// 	printf("\n");
// /*********** Integer ************/
// 	ft_printf("%i", 123456);
// 	printf("\n");
// /*********** String *************/
// 	ft_printf("%s", str);
// 	printf("\n");
// /****** unsigned integer ********/
// 	ft_printf("%u", u);
// 	printf("\n");
// /*********** percent ************/
//     ft_printf("%%");
// 	printf("\n");
// /******** hexadecimal x *********/
// 	ft_printf("%x", x);
// 	printf("\n");
// /******** hexadecimal X *********/
// 	ft_printf("%X", X);
// 	printf("\n");
// /********* Pointer **************/
// 	ft_printf("%p", p);
// 	printf("\n");
// /********************************/
	ft_printf("333%d333 %c123 %s %i123    %% %u    %x %X    %p", d, c, str, i, u, x, X, p);
	printf("\n");
	printf("333%d333 %c123 %s %i123    %% %u    %x %X    %p", d, c, str, i, u, x, X, p);

	return (0);
}