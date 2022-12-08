/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:25:34 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 18:25:35 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
