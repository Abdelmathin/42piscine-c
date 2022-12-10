/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:51:18 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 11:53:40 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 05:
	• Turn-in directory : ex05/
	• Files to turn in  : ft_putstr.c
	• Allowed functions : write
# Subject:
	• Create a function that displays a string of characters on the standard
		output.
	• Here’s how it should be prototyped :
		void ft_putstr(char *str)
*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
