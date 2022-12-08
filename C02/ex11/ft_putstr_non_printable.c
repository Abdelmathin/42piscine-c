/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:44:16 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 14:44:18 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthexof(unsigned char c)
{
	char	*hexadecimals;

	hexadecimals = "0123456789abcdef";
	write(1, hexadecimals + (c / 16), 1);
	write(1, hexadecimals + (c - 16 * (c / 16)), 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while (*s)
	{
		if (*s < 32 || 126 < *s)
		{
			write(1, "\\", 1);
			ft_puthexof(*s);
		}
		else
			write(1, s, 1);
		s++;
	}
}
