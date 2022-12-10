/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:20:08 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 17:30:16 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 02:
	• Turn-in directory : ex02/
	• Files to turn in  : ft_strcat.c
	• Allowed functions : None
# Subject:
	• Reproduce the behavior of the function strcat (man strcat).
	• Here’s how it should be prototyped :
		char *ft_strcat(char *dest, char *src)
*/

char	*ft_strcat(char *dest, char *src)
{
	int	pos;

	pos = 0;
	while (dest[pos])
		pos++;
	while (*src)
	{
		dest[pos] = *src;
		src++;
		pos++;
	}
	dest[pos] = 0;
	return (dest);
}
