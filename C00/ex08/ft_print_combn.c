/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:32:22 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/20 19:45:26 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn_res(char *c, int n, int lev)
{
	int	pos;

	pos = 0;
	while (pos < lev)
	{
		write(1, c + pos, 1);
		pos++;
	}
	if (*c < '0' + 10 - n)
		write(1, ", ", 2);
}

void	ft_print_combn_rec(char *c, int n, int lev)
{
	c[lev - 1] = c[lev - 2] + 1;
	while (c[lev - 1] <= '9' + lev - n)
	{
		if (lev == n)
			ft_print_combn_res(c, n, lev);
		else
			ft_print_combn_rec(c, n, lev + 1);
		c[lev - 1]++;
	}
}

void	ft_print_combn(int n)
{
	char	c[10];

	if (n < 1 || 9 < n)
		return ;
	c[0] = '0';
	while (c[0] <= '9' + 1 - n)
	{
		if (n == 1)
			ft_print_combn_res(c, n, 1);
		else
			ft_print_combn_rec(c, n, 2);
		c[0]++;
	}
}
