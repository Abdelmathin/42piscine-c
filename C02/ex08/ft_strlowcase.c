/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:29:49 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 13:29:51 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*s;

	s = str;
	if (!str || !*str)
		return (str);
	while (*s)
	{
		*s = *s + ('A' <= *s && *s <= 'Z') * ('a' - 'A');
		s++;
	}
	return (str);
}
