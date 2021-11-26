#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *ptr;
    
}

void ft_itoh(int num)
{
    int dev;
    double rem;
    double rem_mult_16;
    char hex;
    
    while (dev > 0)
    {
        dev = num/16;
        rem = num % 16;
        printf("dev is : %d\n", dev);
        printf("rem is : %lf\n", rem);
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
        else
        {
            hex = (char)rem_mult_16;
        }
        printf("hex is : %c\n", hex);
        }
    }
}

int main()
{
    ft_itoh(1128);
    return (EXIT_SUCCESS);
}