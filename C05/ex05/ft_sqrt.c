/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:09:17 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 20:09:18 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
[Abdelmathin Habachi]
[Exercise 05]
	• Turn-in directory : ex05/
	• Files to turn in  : ft_sqrt.c
	• Allowed functions : None
[Subject]
	• Create a function that returns the square root of a number (if it exists),
		or 0 if the square root is an irrational number.
	• Here’s how it should be prototyped :
	int ft_sqrt(int nb);
*/

int	ft_sqrt(int nb)
{
	int		i;
	float	r;

	if (nb < 1)
		return (0);
	r = 1;
	i = 0;
	while (i < 100)
	{
		r = (r * r + nb) / (2.0 * r);
		i++;
	}
	i = r;
	if (i * i == nb)
		return (i);
	if ((i - 1) * (i - 1) == nb)
		return (i - 1);
	if ((i + 1) * (i + 1) == nb)
		return (i + 1);
	return (0);
}
