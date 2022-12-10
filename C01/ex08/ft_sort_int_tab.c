/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:06:55 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 12:22:17 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 08:
	• Turn-in directory : ex08/
	• Files to turn in  : ft_sort_int_tab.c
	• Allowed functions : None
# Subject:
	• Create a function which sorts an array of integers by ascending order.
	• The arguments are a pointer to int and the number of ints in the array.
	• Here’s how it should be prototyped :
		void ft_sort_int_tab(int *tab, int size)
*/

void	ft_sort_int_tab_rec(int pos, int *tab, int size)
{
	int	tmp;

	if (pos >= size - 1)
		return ;
	if (tab[pos] > tab[pos + 1])
	{
		tmp = tab[pos];
		tab[pos] = tab[pos + 1];
		tab[pos + 1] = tmp;
		ft_sort_int_tab_rec(0, tab, size);
	}
	ft_sort_int_tab_rec(pos + 1, tab, size);
}

void	ft_sort_int_tab(int *tab, int size)
{
	ft_sort_int_tab_rec(0, tab, size);
}
