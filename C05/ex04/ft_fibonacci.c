/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:01:14 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 20:01:16 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
[Abdelmathin Habachi]
[Exercise 04]
	• Turn-in directory : ex04/
	• Files to turn in  : ft_fibonacci.c
	• Allowed functions : None
[Subject]
	• Create a function ft_fibonacci that returns the n-th element of the
		Fibonacci sequence, the first element being at the 0 index. We’ll
		consider that the Fibonacci sequence starts like this: 0, 1, 1, 2.
	• Overflows must not be handled, the function return will be undefined.
	• Here’s how it should be prototyped :
		int ft_fibonacci(int index);
	• Obviously, ft_fibonacci has to be recursive.
	• If the index is less than 0, the function should return -1.
*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index < 3)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
