/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:18:59 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 13:19:02 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 07:
	• Turn-in directory : ex07/
	• Files to turn in  : ft_strupcase.c
	• Allowed functions : None
# Subject:
	• Create a function that transforms every letter to uppercase.
	• Here’s how it should be prototyped :
		char *ft_strupcase(char *str)
	• It should return str.
*/

char	*ft_strupcase(char *str)
{
	char	*s;

	s = str;
	if (!str || !*str)
		return (str);
	while (*s)
	{
		*s = *s - ('a' <= *s && *s <= 'z') * ('a' - 'A');
		s++;
	}
	return (str);
}
