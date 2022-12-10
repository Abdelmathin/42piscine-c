/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:32:26 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 13:32:28 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 09:
	• Turn-in directory : ex09/
	• Files to turn in  : ft_strcapitalize.c
	• Allowed functions : None
# Subject:
	• Create a function that capitalizes the first letter of each word and
		transforms all other letters to lowercase.
	• A word is a string of alphanumeric characters.
	• Here’s how it should be prototyped :
		char *ft_strcapitalize(char *str)
	• It should return str.

	• For example:
		salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
	• Becomes: 
		Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
*/

int	ft_isalphanumeric(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*s;

	s = str;
	if (!str || !*str)
		return (str);
	while (*s && !ft_isalphanumeric(*s))
		s++;
	while (*s)
	{
		*s = *s - ('a' <= *s && *s <= 'z') * ('a' - 'A');
		s++;
		while (*s && ft_isalphanumeric(*s))
		{
			*s = *s + ('A' <= *s && *s <= 'Z') * ('a' - 'A');
			s++;
		}
		while (*s && !ft_isalphanumeric(*s))
			s++;
	}
	return (str);
}
