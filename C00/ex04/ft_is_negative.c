/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:34:13 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/20 19:45:26 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
[Abdelmathin Habachi]
[Exercise 04]
	• Turn-in directory : ex04/
	• Files to turn in  : ft_print_numbers.c
	• Allowed functions : write
[Subject]
	• Create a function that displays ’N’ or ’P’ depending on the integer’s sign
		entered parameter.
		• If n is negative, display ’N’.
		• If n is positive or null, display ’P’.
	• Here’s how it should be prototyped :
		void ft_is_negative(int n);
*/

#include <unistd.h>

void	ft_is_negative(int n)
{
	write(1, "NP" + (n >= 0), 1);
}
