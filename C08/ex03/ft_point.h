/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:45:10 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/27 10:45:12 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 03:
	• Turn-in directory : ex03/
	• Files to turn in  : ft_point.h
	• Allowed functions : None
# Subject:
	• Create a file ft_point.h that’ll compile the following main:
		#include "ft_point.h"
		void set_point(t_point *point)
		{
			point->x = 42;
			point->y = 21;
		}
		int main(void)
		{
			t_point point;
			set_point(&point);
			return (0);
		}
*/

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void	set_point(t_point *point);

#endif//FT_POINT_H
