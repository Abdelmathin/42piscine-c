/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:29:41 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 16:29:43 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	range = (int *) malloc((sizeof (int)) * (max - min));
	if (range == NULL)
		return (NULL);
	i = -1;
	while (++i < max - min)
		range[i] = min + i;
	return (range);
}
