/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 22:29:56 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/22 22:30:01 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 01:
	• Turn-in directory : ex01/
	• Files to turn in  : ft_print_params.c
	• Allowed functions : write
# Subject:
	• We’re dealing with a program here, you should therefore have a function
		main in your .c file.
	• Create a program that displays its given arguments.
	• One per line, in the same order as in the command line.
	• It should display all arguments, except for argv[0].
	• Example :
		$>./a.out test1 test2 test3
		test1
		test2
		test3
		$>
*/

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	pos;
	int	len;

	pos = 1;
	while (pos < argc)
	{
		len = 0;
		while (argv[pos][len])
			len++;
		write(1, argv[pos], len);
		write(1, "\n", 1);
		pos++;
	}
	return (0);
}
