/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:44:16 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 14:44:18 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 11:
	• Turn-in directory : ex11/
	• Files to turn in  : ft_putstr_non_printable.c
	• Allowed functions : write
# Subject:
	• Create a function that displays a string of characters onscreen.
		If this string contains characters that aren’t printable,
		they’ll have to be displayed in the shape of hexadecimals (lowercase),
		preceeded by a "backslash".
	• For example :
		Coucou\ntu vas bien ?
	• The function should display :
		Coucou\0atu vas bien ?
	• Here’s how it should be prototyped :
		void ft_putstr_non_printable(char *str)
*/

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
