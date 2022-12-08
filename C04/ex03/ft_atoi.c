/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:06:44 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/29 22:06:47 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	number;
	int	sign;

	sign = -1;
	while (('\t' <= *str && *str <= '\r') || (*str == ' '))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	number = 0;
	while ('0' <= *str && *str <= '9')
	{
		number = 10 * number;
		number = number - *str + '0';
		str++;
	}
	return (sign * number);
}
