/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:10:41 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 13:10:44 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 05:
	• Turn-in directory : ex05/
	• Files to turn in  : ft_str_is_uppercase.c
	• Allowed functions : None
# Subject:
	• Create a function that returns 1 if the string given as a parameter
		contains only uppercase alphabetical characters, and 0 if it contains
		any other character.
	• Here’s how it should be prototyped :
		int ft_str_is_uppercase(char *str)
	• It should return 1 if str is empty.
*/

int	ft_str_is_uppercase(char *str)
{
	if (!str || !*str)
		return (1);
	while ('A' <= *str && *str <= 'Z')
		str++;
	return (!*str);
}
