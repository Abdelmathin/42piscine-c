/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:49:08 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/25 16:49:23 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 02:
	• Turn-in directory : ex02/
	• Files to turn in  : ft_ultimate_range.c
	• Allowed functions : malloc
# Subject:
	• Create a function ft_ultimate_range which allocates and assigns an array
		of ints. This int array should contain all values between min and max.
	• Min included - max excluded.
	• Here’s how it should be prototyped :
		int ft_ultimate_range(int **range, int min, int max)
	• The size of range should be returned (or -1 on error).
	• If the value of min is greater or equal to max’s value, range will point
		on NULL and it should return 0.
*/

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
