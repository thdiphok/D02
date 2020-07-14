/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdiphok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:04:04 by thdiphok          #+#    #+#             */
/*   Updated: 2020/07/14 08:04:43 by thdiphok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_is_negative(int n)
{	
	if (n < 0)
		{
			ft_putchar('N');
	}
	else
{	
		ft_putchar('P');
}
	ft_putchar('\n');
}
int main(void)
{
	ft_is_negative();
	
	return 0;
}
