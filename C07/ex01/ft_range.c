/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:29:41 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 16:29:43 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 01:
	• Turn-in directory : ex01/
	• Files to turn in  : ft_range.c
	• Allowed functions : malloc
# Subject:
	• Create a function ft_range which returns an array ofints.
		This int array should contain all values between min and max.
	• Min included - max excluded.
	• Here’s how it should be prototyped :
		int *ft_range(int min, int max)
	• If min´value is greater or equal to max’s value, a null pointer should be
		returned.
*/

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
