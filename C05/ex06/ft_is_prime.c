/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 22:04:09 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 22:04:11 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
[Abdelmathin Habachi]
[Exercise 06]
	• Turn-in directory : ex06/
	• Files to turn in  : ft_is_prime.c
	• Allowed functions : None
[Subject]
	• Create a function that returns the next prime number greater or equal
		to the number given as argument.
	• Here’s how it should be prototyped :
	int ft_find_next_prime(int nb);

*/

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 0)
		nb = -nb;
	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
