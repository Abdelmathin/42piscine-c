/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:24:49 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 19:24:51 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
[Abdelmathin Habachi]
[Exercise 02]
	• Turn-in directory : ex02/
	• Files to turn in  : ft_iterative_power.c
	• Allowed functions : None
[Subject]
	• Create an iterated function that returns the value of a power applied to
		a number. An power lower than 0 returns 0. Overflows must not be handled.
	• We’ve decided that 0 power 0 will returns 1
	• Here’s how it should be prototyped :
		int ft_iterative_power(int nb, int power);
*/

int	ft_iterative_power(int nb, int power)
{
	int	f;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	f = 1;
	while (power)
	{
		f *= nb;
		power--;
	}
	return (f);
}
