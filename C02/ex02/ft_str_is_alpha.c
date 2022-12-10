/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:02:10 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 13:02:12 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 02:
	• Turn-in directory : ex02/
	• Files to turn in  : ft_str_is_alpha.c
	• Allowed functions : None
# Subject:
	• Create a function that returns 1 if the string given as a parameter
		contains only alphabetical characters, and 0 if it contains any other
		character.
	• Here’s how it should be prototyped :
		int ft_str_is_alpha(char *str)
	• It should return 1 if str is empty.
*/

int	ft_str_is_alpha(char *str)
{
	if (!str || !*str)
		return (1);
	while (('A' <= *str && *str <= 'Z') || ('a' <= *str && *str <= 'z'))
		str++;
	return (!*str);
}
