/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:30:52 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 11:34:30 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dm[2];

	if (*b == 0)
		return ;
	dm[0] = *a / *b;
	dm[1] = *a % *b;
	*a = *dm;
	*b = *(dm + 1);
}	