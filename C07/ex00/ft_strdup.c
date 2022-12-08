/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:50:43 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 15:50:45 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
