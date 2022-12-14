/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:22:53 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 17:00:22 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 00:
	• Turn-in directory : ex00/
	• Files to turn in  : ft_strcmp.c
	• Allowed functions : None
# Subject:
	• Reproduce the behavior of the function strcmp (man strcmp).
	• Here’s how it should be prototyped :
		int ft_strcmp(char *s1, char *s2)
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	while (s1[pos] && s2[pos] && s1[pos] == s2[pos])
		pos++;
	return (s1[pos] - s2[pos]);
}
