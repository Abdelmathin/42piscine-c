/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:31:54 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 17:36:17 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
