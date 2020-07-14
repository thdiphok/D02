/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdiphok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 07:58:31 by thdiphok          #+#    #+#             */
/*   Updated: 2020/07/14 07:58:43 by thdiphok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);					
}
void ft_print_alphabet(void)
{
    char L ;
		 L ='a';
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
