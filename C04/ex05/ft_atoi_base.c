/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:45:57 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/29 22:45:58 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_base_of(char *s)
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

int	ft_indexof(char c, char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (str[pos] == c)
			return (pos);
		pos++;
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

int	ft_atoi_base(char *str, char *base)
{
	int	b;
	int	number;
	int	d;
	int	sign;

	b = get_base_of(base);
	if (b < 2)
		return (0);
	number = 0;
	sign = -1;
	str = ft_skip_and_get_sign(str, &sign);
	while (*str)
	{
		d = ft_indexof(*str, base);
		if (d < 0)
			break ;
		number = b * number;
		number = number - d;
		str++;
	}
	return (sign * number);
}