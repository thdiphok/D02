#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);					
}
void ft_print_alphabet(void)
{
    char L ='a';
	while(L <= 'z')
	{
        ft_putchar(L);
        L++;
	}
}
int main(void)
{
	ft_print_alphabet();
    return 0;

}
