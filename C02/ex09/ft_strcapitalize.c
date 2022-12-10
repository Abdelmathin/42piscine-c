/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:32:26 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 13:32:28 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalphanumeric(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*s;

	s = str;
	if (!str || !*str)
		return (str);
	while (*s && !ft_isalphanumeric(*s))
		s++;
	while (*s)
	{
		*s = *s - ('a' <= *s && *s <= 'z') * ('a' - 'A');
		s++;
		while (*s && ft_isalphanumeric(*s))
		{
			*s = *s + ('A' <= *s && *s <= 'Z') * ('a' - 'A');
			s++;
		}
		while (*s && !ft_isalphanumeric(*s))
			s++;
	}
	return (str);
}
