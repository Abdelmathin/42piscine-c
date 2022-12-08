/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:01:45 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 17:10:54 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	pos;

	pos = 0;
	while (pos < n && s1[pos] && s2[pos] && s1[pos] == s2[pos])
		pos++;
	return ((pos < n) * (s1[pos] - s2[pos]));
}
