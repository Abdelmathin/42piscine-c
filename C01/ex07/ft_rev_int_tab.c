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
