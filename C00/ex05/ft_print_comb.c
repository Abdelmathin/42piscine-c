/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:40:27 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/20 19:45:26 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	b[5];

	b[0] = '0';
	b[3] = ',';
	b[4] = ' ';
	while (b[0] <= '7')
	{
		b[1] = b[0] + 1;
		while (b[1] <= '8')
		{
			b[2] = b[1] + 1;
			while (b[2] <= '9')
			{
				write(1, b, 5 - 2 * (b[0] == '7'));
				b[2]++;
			}
			b[1]++;
		}
		b[0]++;
	}
}