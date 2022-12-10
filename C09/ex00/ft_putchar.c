/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 23:23:38 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/30 23:23:39 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 00:
	• Turn-in directory : ex00/
	• Files to turn in  : libft_creator.sh, ft_putchar.c, ft_swap.c,
						  ft_putstr.c, ft_strlen.c, ft_strcmp.c
	• Allowed functions : write
# Subject:
	• Create your ft library. It’ll be called libft.a.
	• A shell script called libft_creator.sh will compile source files
		appropriately and will create your library.
	• This library should contain all of the following functions :
		void	ft_putchar(char c);
		void	ft_swap(int *a, int *b);
		void	ft_putstr(char *str);
		int		ft_strlen(char *str);
		int		ft_strcmp(char *s1, char *s2);
	• We’ll launch the following command-line :
		sh libft_creator.sh
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
