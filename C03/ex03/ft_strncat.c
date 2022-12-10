/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:31:54 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 17:36:17 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 03:
	• Turn-in directory : ex03/
	• Files to turn in  : ft_strncat.c
	• Allowed functions : None
# Subject:
	• Reproduce the behavior of the function strncat (man strncat).
	• Here’s how it should be prototyped :
		char *ft_strncat(char *dest, char *src, unsigned int nb)
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	pos;

	pos = 0;
	while (dest[pos])
		pos++;
	while (nb && *src)
	{
		dest[pos] = *src;
		src++;
		pos++;
		nb--;
	}
	dest[pos] = 0;
	return (dest);
}
