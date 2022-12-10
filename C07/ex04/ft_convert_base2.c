/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:25:44 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 18:25:45 by ahabachi         ###   ########.fr       */
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
