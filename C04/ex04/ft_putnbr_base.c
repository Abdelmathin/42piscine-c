/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 09:09:18 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/22 10:21:50 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_and_get_len(char *base)
{
	int	b;
	int	c;

	b = 0;
	if (!base || !base[0] || !base[1])
		return (-1);
	while (base[b])
	{
		c = 0;
		while (base[c])
		{
			if (base[c] == '+' || base[c] == '-' )
				return (-1);
			if (c != b && base[b] == base[c])
				return (-1);
			c++;
		}
		b++;
	}
	return (b);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr1[2];

	nbr1[0] = nbr;
	nbr1[1] = check_and_get_len(base);
	if (nbr1[1] < 2)
		return ;
	if (nbr1[0] < 0)
	{
		write(1, "-", 1);
		nbr1[0] = -nbr1[0];
	}
	if (nbr1[0] < nbr1[1])
		write(1, base + nbr1[0], 1);
	else
	{
		ft_putnbr_base(nbr1[0] / nbr1[1], base);
		ft_putnbr_base(nbr1[0] % nbr1[1], base);
	}
}
