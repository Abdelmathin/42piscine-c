/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 22:37:30 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/22 22:37:35 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
[By]
	Abdelmathin Habachi
[C06-Exercise 02]
	• Turn-in directory : ex02/
	• Files to turn in  : ft_rev_params.c
	• Allowed functions : write
[SUBJECT]
	• We’re dealing with a program here, you should therefore have a function
		main in your .c file.
	• Create a program that displays its given arguments.
	• One per line, in the reverse order of the command line.
	• It should display all arguments, except for argv[0].
*/

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	pos;
	int	len;

	pos = argc - 1;
	while (pos)
	{
		len = 0;
		while (argv[pos][len])
			len++;
		write(1, argv[pos], len);
		write(1, "\n", 1);
		pos--;
	}
	return (0);
}
