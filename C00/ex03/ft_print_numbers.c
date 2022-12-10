/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:31:12 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/20 19:45:26 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 03:
	• Turn-in directory : ex03/
	• Files to turn in  : ft_print_numbers.c
	• Allowed functions : write
# Subject:
	• Create a function that displays all digits, on a single line,
		by ascending order.
	• Here’s how it should be prototyped :
		void ft_print_numbers(void);
*/

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}
