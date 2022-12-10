/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:05:50 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 13:07:47 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 03:
	• Turn-in directory : ex03/
	• Files to turn in  : ft_str_is_numeric.c
	• Allowed functions : None
# Subject:
	• Create a function that returns 1 if the string given as a parameter
		contains only digits, and 0 if it contains any other character.
	• Here’s how it should be prototyped :
		int ft_str_is_numeric(char *str)
	• It should return 1 if str is empty.
*/

int	ft_str_is_numeric(char *str)
{
	if (!str || !*str)
		return (1);
	while ('0' <= *str && *str <= '9')
		str++;
	return (!*str);
}
