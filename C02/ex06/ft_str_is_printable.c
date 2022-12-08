/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:14:54 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 13:14:55 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	if (!str || !*str)
		return (1);
	while (31 < *s && *s < 128)
		s++;
	return (!*s);
}
