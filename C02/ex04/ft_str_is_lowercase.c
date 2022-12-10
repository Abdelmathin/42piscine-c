/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:08:48 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 13:08:50 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 04:
	• Turn-in directory : ex04/
	• Files to turn in  : ft_str_is_lowercase.c
	• Allowed functions : None
# Subject:
	• Create a function that returns 1 if the string given as a parameter
		contains only lowercase alphabetical characters, and 0 if it contains
		any other character.
	• Here’s how it should be prototyped :
		int ft_str_is_lowercase(char *str)
	• It should return 1 if str is empty.
*/

int	ft_str_is_lowercase(char *str)
{
	if (!str || !*str)
		return (1);
	while ('a' <= *str && *str <= 'z')
		str++;
	return (!*str);
}
