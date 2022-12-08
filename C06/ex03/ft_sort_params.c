/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 22:42:05 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/22 22:42:07 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
[By]
	Abdelmathin Habachi
[C06-Exercise 03]
	• Turn-in directory : ex03/
	• Files to turn in  : ft_sort_params.c
	• Allowed functions : write
[SUBJECT]
	• We’re dealing with a program here, you should therefore have a function
		main in your .c file.
	• Create a program that displays its given arguments sorted by ascii order.
	• It should display all arguments, except for argv[0].
	• One argument per line.
*/

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	if (*s1 && *s2 && *s1 == *s2)
		return (ft_strcmp(s1 + 1, s2 + 1));
	return (*s1 - *s2);
}

char	**ft_strsswap(char **arr, char *s0, char *s1)
{
	arr[0] = s1;
	arr[1] = s0;
	return (arr);
}

char	**ft_rsort_array(int len, char **arr)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (ft_strcmp(arr[i], arr[i + 1]) < 0)
		{
			ft_strsswap(arr + i, arr[i], arr[i + 1]);
			return (ft_rsort_array(len, arr));
		}
		i++;
	}
	return (arr);
}

void	ft_putstrln(char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (0);
	argc--;
	argv = ft_rsort_array(argc, argv + 1);
	while (argc)
		ft_putstrln(argv[--argc]);
	return (0);
}
