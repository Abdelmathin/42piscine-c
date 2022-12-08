/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:20:31 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 19:20:33 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
[Abdelmathin Habachi]
[Exercise 01]
	• Turn-in directory : ex01/
	• Files to turn in  : ft_recursive_factorial.c
	• Allowed functions : None
[Subject]
	• Create a recursive function that returns the factorial of the number
		given as a parameter.
	• If the argument is not valid the function should return 0.
	• Overflows must not be handled, the function return will be undefined.
	• Here’s how it should be prototyped :
		int ft_recursive_factorial(int nb);
*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
