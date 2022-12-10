/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:49:08 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/27 10:49:10 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 04:
	• Turn-in directory : ex04/
	• Files to turn in  : ft_strs_to_tab.c
	• Allowed functions : malloc, free
# Subject:
	• Create a function that takes an array of string as argument and the size
		of this array.
	• Here’s how it should be prototyped:
		struct s_stock_str *ft_strs_to_tab(int ac, char **av)
	• It will transform each element of av into a structure.
	• The structure will be defined in the ft_stock_str.h file that we will
		provided, like this:

		typedef struct s_stock_str
		{
			int size;
			char *str;
			char *copy;
		} t_stock_str;
	• size being the length of the string
	• str being the string
	• copy being a copy of the string
	• It should keep the order of av
	• The returned array should allocated in memory and its last element’s str
		set to 0, this will mark the end of the array
	• It should return a NULL pointer if an error occurs.
	• We’ll test your function with our ft_show_tab (next exercise). Make it
		work according to this !
*/

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_copy(struct s_stock_str *array, char **sarr, int ac)
{
	int	i;

	array[ac].size = 0;
	if ((sarr == NULL) || (sarr[ac] == NULL))
	{
		array[ac].str = 0;
		array[ac].copy = 0;
		return (1);
	}
	array[ac].str = sarr[ac];
	while ((array[ac].str)[array[ac].size])
		array[ac].size++;
	array[ac].copy = malloc(sizeof (char) * (array[ac].size + 1));
	if (array[ac].copy != NULL)
	{
		i = 0;
		while (i < array[ac].size)
		{
			(array[ac].copy)[i] = (array[ac].str)[i];
			i++;
		}
		(array[ac].copy)[i] = 0;
	}
	return (0);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;

	if (ac < 0)
		return (NULL);
	arr = malloc((sizeof (struct s_stock_str)) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	arr[ac].str = 0;
	arr[ac].size = 0;
	arr[ac].copy = 0;
	while (0 <= --ac)
		ft_copy(arr, av, ac);
	return (arr);
}
