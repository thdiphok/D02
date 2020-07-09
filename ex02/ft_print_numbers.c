#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);

}
void ft_print_numbers(void)
{
	char L ='0';
	while(L <='9')
	{
		ft_putchar(L);
		L++;
	}
	ft_putchar('\n');
}
int main (void)
{
	ft_print_numbers();
	return 0;
}
