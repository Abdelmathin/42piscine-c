/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:29:00 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/27 11:29:01 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 05:
	• Turn-in directory : ex05/
	• Files to turn in  : ft_strs_to_tab.c
	• Allowed functions : malloc, free
# Subject:
	• Create a function that displays the content of the array created by the
		previous function.
	• Here’s how it should be prototyped:
		void ft_show_tab(struct s_stock_str *par)
	• The structure will be the same as the previous exercise and will be
		defined in the ft_stock_str.h file
	• For each element, we’ll display:
		• the string followed by a ’\n’
		• the size followed by a ’\n’
		• the copy of the string (that could have been modified) followed
			by a ’\n’
	• We’ll test your function with our ft_strs_to_tab (previous exercise).
		Make it work according to this !
*/

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
