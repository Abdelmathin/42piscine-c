/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:37:01 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 17:55:14 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 04:
	• Turn-in directory : ex04/
	• Files to turn in  : ft_strstr.c
	• Allowed functions : None
# Subject:
	• Reproduce the behavior of the function strstr (man strstr).
	• Here’s how it should be prototyped :
		char	*ft_strstr(char *str, char *to_find)
# Description
	The strstr function returns :
		• a pointer to the located string,
		• a null pointer if the `to_find` is not found.
		If `to_find` points to a string with zero length:
			the function returns `str`.
*/

int	ft_startswith(char *str, char *s)
{
	while (*str && *s && (*str == *s))
	{
		str++;
		s++;
		if (*s == 0)
			return (1);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (to_find[0] == 0)
		return (str);
	while (*str)
	{
		if (ft_startswith(str, to_find))
			return (str);
		str++;
	}
	return (0);
}
