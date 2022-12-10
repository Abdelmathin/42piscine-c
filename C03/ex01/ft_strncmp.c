/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:01:45 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 17:10:54 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 01:
	• Turn-in directory : ex01/
	• Files to turn in  : ft_strncmp.c
	• Allowed functions : None
# Subject:
	• Reproduce the behavior of the function strncmp (man strncmp).
	• Here’s how it should be prototyped :
		int ft_strncmp(char *s1, char *s2, unsigned int n)
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	pos;

	pos = 0;
	while (pos < n && s1[pos] && s2[pos] && s1[pos] == s2[pos])
		pos++;
	return ((pos < n) * (s1[pos] - s2[pos]));
}
