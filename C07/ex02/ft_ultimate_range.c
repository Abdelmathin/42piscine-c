/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:49:08 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 16:49:23 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = (int *) malloc((sizeof (int)) * (max - min));
	if (range[0] == NULL)
		return (-1);
	i = -1;
	while (++i < max - min)
		range[0][i] = min + i;
	return (max - min);
}
