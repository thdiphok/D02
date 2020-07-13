#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write ( 1, &c, 1);
}

void ft_print_comb(void)
{
    int     a;
    int     b;
    int     c;

    a = 0;

    while (a < 8)
    {
            b = a + 1;
            while (b < 9)
            {
                    c = b + 1;
                    while (c <= 9)
                    {
                            ft_putchar('0' + a%10);
                            ft_putchar('0' + b%10);
                            ft_putchar('0' + c%10);
                            if (a < 7 || b < 8 || c < 9)
                            {
                                    ft_putchar(',');
                                    ft_putchar(' ');
                            }
                            c++;
                    }
                    b++;
            }
            a++;
    }
    ft_putchar('\n');
}
int main() {
    
    ft_print_comb();
    return 0;
}
