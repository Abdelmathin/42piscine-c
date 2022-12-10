/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:26:56 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 17:26:58 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	c7x3_copy_at(char *dest, int at, char *src, int condition)
{
	if (!dest)
		condition = 0;
	while (*src)
	{
		if (condition)
			dest[at] = *src;
		src++;
		at++;
	}
	if (condition)
		dest[at] = 0;
	return (at);
}

int	c7x3_get_length(int size, char **strs, char *sep)
{
	int	len;

	len = c7x3_copy_at(NULL, 0, sep, 0) * (size - 1);
	while (0 <= --size)
		len += c7x3_copy_at(NULL, 0, strs[size], 0);
	return (len + 1);
}

char	*c7x3_alloc(char **to, int size)
{
	to[0] = (char *) malloc((sizeof (char)) * size);
	if (to[0] == NULL)
		return (NULL);
	while (0 <= --size)
		to[0][size] = 0;
	return (to[0]);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		pos;
	int		at;

	if (size <= 0)
		return (c7x3_alloc(&dest, 1));
	if (c7x3_alloc(&dest, c7x3_get_length(size, strs, sep)) == NULL)
		return (NULL);
	at = 0;
	pos = 0;
	while (pos++ < size)
	{
		at = c7x3_copy_at(dest, at, strs[pos - 1], 1);
		at = c7x3_copy_at(dest, at, sep, pos < size);
	}
	return (dest);
}
