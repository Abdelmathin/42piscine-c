/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:54:50 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/20 19:45:26 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
[Abdelmathin Habachi]
[Exercise 06]
	• Turn-in directory : ex06/
	• Files to turn in  : ft_print_comb2.c
	• Allowed functions : write
[Subject]
	• Create a function that displays all different combination of two digits
		between 00 and 99, listed by ascending order.
	• Here’s the expected output :
		$>./a.out | cat -e
		00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>
	• Here’s how it should be prototyped :
		void ft_print_comb2(void);
*/

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	s[7];

	s[2] = ' ';
	s[5] = 0;
	while (s[5] <= 98)
	{
		s[0] = (s[5] / 10) + '0';
		s[1] = (s[5] % 10) + '0';
		s[6] = s[5] + 1;
		while (s[6] <= 99)
		{
			s[3] = (s[6] / 10) + '0';
			s[4] = (s[6] % 10) + '0';
			write(1, s, 5);
			if (s[5] == 98 && s[6] == 99)
				return ;
			write(1, ", ", 2);
			s[6]++;
		}
		s[5]++;
	}
}
