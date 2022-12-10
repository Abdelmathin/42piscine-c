/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 08:04:56 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/22 08:06:32 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 00:
	• Turn-in directory : ex00/
	• Files to turn in  : ft_strlen.c
	• Allowed functions : None
# Subject:
	• Create a function that counts and returns the number of characters in
		a string.
	• Here’s how it should be prototyped :
		int ft_strlen(char *str)
*/

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
