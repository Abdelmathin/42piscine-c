/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:00:19 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 12:06:02 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 07:
	• Turn-in directory : ex07/
	• Files to turn in  : ft_rev_int_tab.c
	• Allowed functions : None
# Subject:
	• Create a function which reverses a given array of integer
		(first goes last, etc).
	• Here’s how it should be prototyped :
		void ft_rev_int_tab(int *tab, int size)
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	pos;
	int	tmp;

	pos = 0;
	while (pos < size / 2)
	{
		tmp = tab[pos];
		tab[pos] = tab[size - 1 - pos];
		tab[size - 1 - pos] = tmp;
		pos++;
	}
}
