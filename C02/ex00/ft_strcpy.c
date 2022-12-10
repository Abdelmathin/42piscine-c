/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:48:28 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 12:52:33 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 00:
	• Turn-in directory : ex00/
	• Files to turn in  : ft_strcpy.c
	• Allowed functions : None
# Subject:
	• Reproduce the behavior of the function strcpy (man strcpy).
	• Here’s how it should be prototyped :
		char *ft_strcpy(char *dest, char *src)
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
