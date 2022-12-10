/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:57:07 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 12:57:14 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 01:
	• Turn-in directory : ex01/
	• Files to turn in  : ft_strncpy.c
	• Allowed functions : None
# Subject:
	• Reproduce the behavior of the function strncpy (man strncpy).
	• Here’s how it should be prototyped :
		char *ft_strncpy(char *dest, char *src, unsigned int n)
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
