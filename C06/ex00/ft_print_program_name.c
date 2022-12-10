/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 22:19:07 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/22 22:25:25 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 00:
	• Turn-in directory : ex00/
	• Files to turn in  : ft_print_program_name.c
	• Allowed functions : write
# Subject:
	• We’re dealing with a program here, you should therefore have a function
		main in your .c file.
	• Create a program that displays its own name.
	• Example :
		$>./a.out
		./a.out
		$>
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*first;

	if (argc < 1)
		return (0);
	first = argv[0];
	while (*first)
		first += write(1, first, 1);
	write(1, "\n", 1);
	return (0);
}
