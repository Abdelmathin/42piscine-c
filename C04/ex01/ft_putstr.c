/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 08:07:23 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/22 08:09:06 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 01:
	• Turn-in directory : ex01/
	• Files to turn in  : ft_putstr.c
	• Allowed functions : None
# Subject:
	• Create a function that displays a string of characters on the standard
		output.
	• Here’s how it should be prototyped :
		void ft_putstr(char *str)
*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		str += write(1, str, 1);
}
