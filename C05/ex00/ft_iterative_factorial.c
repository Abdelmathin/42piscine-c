/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:02:52 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 19:02:54 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
[Abdelmathin Habachi]
[Exercise 00]
	• Turn-in directory : ex00/
	• Files to turn in  : ft_iterative_factorial.c
	• Allowed functions : None
[Subject]
	• Create an iterated function that returns a number. This number is the
		result of a factorial operation based on the number given as a parameter.
	• If the argument is not valid the function should return 0.
	• Overflows must not be handled, the function return will be undefined.
	• Here’s how it should be prototyped :
		int ft_iterative_factorial(int nb);
*/

int	ft_iterative_factorial(int nb)
{
	int	f;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	f = 1;
	while (nb)
		f *= nb--;
	return (f);
}
