/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:29:49 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 13:29:51 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 08:
	• Turn-in directory : ex08/
	• Files to turn in  : ft_strlowcase.c
	• Allowed functions : None
# Subject:
	• Create a function that transforms every letter to lowercase.
	• Here’s how it should be prototyped :
		char *ft_strlowcase(char *str)
	• It should return str.
*/

char	*ft_strlowcase(char *str)
{
	char	*s;

	s = str;
	if (!str || !*str)
		return (str);
	while (*s)
	{
		*s = *s + ('A' <= *s && *s <= 'Z') * ('a' - 'A');
		s++;
	}
	return (str);
}
