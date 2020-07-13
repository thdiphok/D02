/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdiphok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:40:47 by thdiphok          #+#    #+#             */
/*   Updated: 2020/07/13 09:41:56 by thdiphok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write ( 1, &c, 1);
}

void ft_print_comb2(void)
{
    int     a;
    int     b;

    a = 0;

    while (a < 8)
    {
            b = a + 1;
            while (b < 9)
            {
                ft_putchar('0' + a%10);
                ft_putchar('0' + b%10);
                    if (a < 8 || b < 9)
                    {
                        ft_putchar(',');
                        ft_putchar(' ');
                    
                    }
                    b++;
            }
            a++;
    }
    ft_putchar('\n');
}
int main() {
    
        ft_print_comb2();
        
    // printf() displays the string inside quotation
  // write(1,"Hello, World!\n",15);
  // write(1,"Your numer is = 32",18);
    return 0;
}
