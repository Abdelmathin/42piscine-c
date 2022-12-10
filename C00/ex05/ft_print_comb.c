/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:40:27 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/20 19:45:26 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 05:
	• Turn-in directory : ex05/
	• Files to turn in  : ft_print_comb.c
	• Allowed functions : write
# Subject:
	• Create a function that displays all different combinations of three
		different digits in ascending order, listed by ascending order - yes,
		repetition is voluntary.
	• Here’s the intended output :
		$>./a.out | cat -e
		012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
	• 987 isn’t there because 789 already is.
	• 999 isn’t there because the digit 9 is present more than once.
	• Here’s how it should be prototyped :
		void ft_print_comb(void);
*/

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
