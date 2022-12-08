/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:25:44 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 18:25:45 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_repeat(char *dest)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		j = i + 1;
		while (dest[j])
		{
			if (dest[i] == dest[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	c07ex04_get_base_of(char *s)
{
	int	i;
	int	j;

	if (!s || s[0] == 0 || s[1] == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == '-' || s[i] == '+')
			return (0);
		if (('\t' <= s[i] && s[i] <= '\r') || (s[i] == ' '))
			return (0);
		j = 0;
		while (s[j])
		{
			if ((i != j) && (s[i] == s[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	c07ex04_indexof(char c, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_skip_and_get_sign(char *str, int *sign)
{
	while (('\t' <= *str && *str <= '\r') || (*str == ' '))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign = -*sign;
		str++;
	}
	return (str);
}

long	ft_atol_base(char *str, char *base)
{
	int		b;
	long	number;
	int		d;
	int		sign;

	b = c07ex04_get_base_of(base);
	if (b < 2)
		return (0);
	number = 0;
	sign = -1;
	str = ft_skip_and_get_sign(str, &sign);
	while (*str)
	{
		d = c07ex04_indexof(*str, base);
		if (d < 0)
			break ;
		number = b * number;
		number = number - d;
		str++;
	}
	return (sign * number);
}
