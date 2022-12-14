/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:25:34 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 18:25:35 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 04:
	• Turn-in directory : ex04/
	• Files to turn in  : ft_convert_base.c, ft_convert_base2.c
	• Allowed functions : malloc, free
# Subject:
	• Create a function that returns the result of the conversion of the
		string nbr from a base base_from to a base base_to.
	• nbr, base_from, base_to may be not writable.
	• nbr will follow the same rules as ft_atoi_base (from an other module).
		Beware of ’+’, ’-’ and whitespaces.
	• The number represented by nbr must fit inside an int.
	• If a base is wrong, NULL should be returned.
	• The returned number must be prefix only by a single and uniq ’-’ if
		necessary, no whitespaces, no ’+’
	• Here’s how it should be prototyped :
		char *ft_convert_base(char *nbr, char *base_from, char *base_to)
*/

#include <stdlib.h>

long	ft_atol_base(char *str, char *base);
int		c07ex04_get_base_of(char *s);
int		ft_repeat(char *dest);

char	*c07ex04_strndup(char *s, int i)
{
	char	*r;

	r = malloc((sizeof (char)) * (i + 1));
	r[i] = 0;
	while (0 <= --i)
		r[i] = s[i];
	return (r);
}

char	*c07ex04_strdup(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (c07ex04_strndup(s, i));
}

int	ft_baselen(char *dest)
{
	int	len;

	if (!dest || !dest[0] || !dest[1])
		return (0);
	if (ft_repeat(dest))
		return (0);
	len = 0;
	while (dest[len])
	{
		if (dest[len] == '+' || dest[len] == '-' || dest[len] == ' ')
			return (0);
		if ('\t' <= dest[len] && dest[len] <= '\r')
			return (0);
		len++;
	}
	return (len);
}

char	*ft_nbrdup(long lfrom, int base, char *base_to)
{
	char	tmp[64];
	int		sign;
	int		tmp_pos;

	if (lfrom == 0)
		return (c07ex04_strndup(base_to, 1));
	sign = 1;
	if (lfrom < 0)
		sign = -1;
	tmp_pos = 62;
	tmp[tmp_pos + 1] = 0;
	tmp[tmp_pos] = base_to[0];
	while (lfrom)
	{
		tmp[tmp_pos] = base_to[sign * (lfrom % base)];
		tmp_pos--;
		lfrom /= base;
	}
	if (sign < 0)
		tmp[tmp_pos--] = '-';
	return (c07ex04_strdup(tmp + tmp_pos + 1));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	lfrom;
	int		base;

	base = ft_baselen(base_to);
	if (ft_baselen(base_from) < 2 || base < 2)
		return (0);
	lfrom = ft_atol_base(nbr, base_from);
	return (ft_nbrdup(lfrom, base, base_to));
}
