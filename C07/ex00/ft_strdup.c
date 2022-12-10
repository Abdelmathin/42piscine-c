/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:50:43 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 15:50:45 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 00:
	• Turn-in directory : ex00/
	• Files to turn in  : ft_strdup.c
	• Allowed functions : malloc
# Subject:
	• Reproduce the behavior of the function strdup (man strdup).
	• Here’s how it should be prototyped :
		char *ft_strdup(char *src)
*/

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	len = 0;
	if (src == NULL)
		return (NULL);
	while (src[len])
		len++;
	dest = (char *) malloc((sizeof (char)) * (len + 1));
	if (dest == NULL)
		return (NULL);
	dest[len] = 0;
	while (0 <= --len)
		dest[len] = src[len];
	return (dest);
}
