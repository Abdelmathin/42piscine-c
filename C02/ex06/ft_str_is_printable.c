/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:14:54 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 13:14:55 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 06:
	• Turn-in directory : ex06/
	• Files to turn in  : ft_str_is_printable.c
	• Allowed functions : None
# Subject:
	• Create a function that returns 1 if the string given as a parameter
		contains only printable characters, and 0 if it contains any other
		character.
	• Here’s how it should be prototyped :
		int ft_str_is_printable(char *str)
	• It should return 1 if str is empty.
*/

int	ft_str_is_printable(char *str)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	if (!str || !*str)
		return (1);
	while (31 < *s && *s < 128)
		s++;
	return (!*s);
}
