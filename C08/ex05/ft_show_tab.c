/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:29:00 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/27 11:29:01 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	c8x5_puts(char *s)
{
	if (s)
	{
		while (*s)
			write(1, s++, 1);
	}
	write(1, "\n", 1);
}

void	c8x5_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
		write(1, "-", 1);
	nb = nb * (nb > 0) - (nb < 0) * nb;
	if (nb / 10)
		c8x5_putnbr(nb / 10);
	write(1, &("0123456789"[(nb % 10)]), 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	if (par)
	{
		while (par->str)
		{
			c8x5_puts(par->str);
			c8x5_putnbr(par->size);
			write(1, "\n", 1);
			c8x5_puts(par->copy);
			par++;
		}
	}
}
