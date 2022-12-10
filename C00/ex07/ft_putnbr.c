/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:55:01 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/20 19:45:26 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
[Abdelmathin Habachi]
[Exercise 07]
	• Turn-in directory : ex07/
	• Files to turn in  : ft_putnbr.c
	• Allowed functions : write
[Subject]
	• Create a function that displays the number entered as a parameter.
		The function has to be able to display all possible values within
		an int type variable.
	• Here’s how it should be prototyped :
		void ft_putnbr(int nb);
	• For example:
		ft_putnbr(42) displays "42".
*/

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb < 0)
		write(1, "-", 1);
	if (nb < -9 || 9 < nb)
		ft_putnbr(((nb > 0) - (nb < 0)) * (nb / 10));
	write(1, &"9876543210123456789"[9 + nb % 10], 1);
}
