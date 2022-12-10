/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 22:25:35 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 22:25:36 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 07:
	• Turn-in directory : ex07/
	• Files to turn in  : ft_find_next_prime.c
	• Allowed functions : None
# Subject:
	• Create a function that returns the next prime number greater or equal
		to the number given as argument.
	• Here’s how it should be prototyped :
	int ft_find_next_prime(int nb);

*/

int	ft_is_prime2(int nb)
{
	int	i;

	if (nb <= 2)
		return (nb == 2);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (2 < nb && !ft_is_prime2(nb))
		nb++;
	if (nb < 2)
		return (2);
	return (nb);
}
