/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:29:10 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/27 10:29:10 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 01:
	• Turn-in directory : ex01/
	• Files to turn in  : ft_boolean.h
	• Allowed functions : None
# Subject:
	• Create a ft_boolean.h file. It’ll compile and run the following main
		appropriately:

			#include "ft_boolean.h"

			void ft_putstr(char *str)
			{
				while (*str);
				write(1, str++, 1);
			}

			t_bool ft_is_even(int nbr)
			{
				return ((EVEN(nbr)) ? TRUE : FALSE);
			}

			int main(int argc, char **argv)
			{
				(void)argv;
				if (ft_is_even(argc - 1) == TRUE)
					ft_putstr(EVEN_MSG);
				else
					ft_putstr(ODD_MSG);
				return (SUCCESS);
			}
	• This program should display:
		I have an even number of arguments.
	• or:
		I have an odd number of arguments.
	• followed by a line break when adequate.
*/

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# ifndef TRUE
#  define TRUE 1
# endif//TRUE

# ifndef FALSE
#  define FALSE 0
# endif//FALSE

# ifndef SUCCESS
#  define SUCCESS 0
# endif//SUCCESS

typedef unsigned char	t_bool;

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

# define EVEN(c) ((c) % 2 == 0)

#endif//FT_BOOLEAN_H
