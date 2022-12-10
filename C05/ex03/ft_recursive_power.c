/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:46:21 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 19:48:04 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
[Abdelmathin Habachi]
[Exercise 03]
	• Turn-in directory : ex03/
	• Files to turn in  : ft_recursive_power.c
	• Allowed functions : None
[Subject]
	• Create a recursive function that returns the value of a power applied
		to a number.
	• Overflows must not be handled, the function return will be undefined.
	• We’ve decided that 0 power 0 will returns 1
	• Here’s how it should be prototyped :
		int ft_recursive_power(int nb, int power);
*/

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (ft_recursive_power(nb, power - 1) * nb);
}
