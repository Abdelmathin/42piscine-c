/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:10:46 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/20 10:13:42 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 00:
	• Turn-in directory : ex00/
	• Files to turn in  : ft_putchar.c
	• Allowed functions : write
# Subject:
	• Write a function that displays the character passed as a parameter.
	• It will be prototyped as follows :
		void ft_putchar(char c);
# Help:
	To display the character, you must use the write function as follows.
		write(1, &c, 1);
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
