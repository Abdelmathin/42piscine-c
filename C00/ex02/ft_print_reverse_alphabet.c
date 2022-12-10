/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:25:06 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/20 19:45:26 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
[Abdelmathin Habachi]
[Exercise 02]
	• Turn-in directory : ex02/
	• Files to turn in  : ft_print_reverse_alphabet.c
	• Allowed functions : write
[Subject]
	• Create a function that displays the alphabet in lowercase,
		on a single line, by descending order, starting from the letter ’z’.
	• Here’s how it should be prototyped :
		void ft_print_reverse_alphabet(void);
*/

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while ('a' <= c)
	{
		write(1, &c, 1);
		c--;
	}
}
