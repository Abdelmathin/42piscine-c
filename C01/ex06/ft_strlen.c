/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:54:36 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 11:58:33 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 06:
	• Turn-in directory : ex06/
	• Files to turn in  : ft_strlen.c
	• Allowed functions : None
# Subject:
	• Create a function that counts and returns the number of characters in a
		string.
	• Here’s how it should be prototyped :
		int	ft_strlen(char *str)
*/

int	ft_strlen(char *str)
{
	if (*str)
		return (1 + ft_strlen(str + 1));
	return (0);
}
