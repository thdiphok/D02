#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);					
}
void ft_print_reverse_alphabet(void)
{
    char L ='z';
	while(L >= 'a')
	{
        ft_putchar(L);
        L--;
	}
	ft_putchar('\n');

}
int main(void)
{
	ft_print_reverse_alphabet();
    return 0;

}

