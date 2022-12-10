/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:41:32 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/27 10:41:33 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 02:
	• Turn-in directory : ex02/
	• Files to turn in  : ft_abs.h
	• Allowed functions : None
# Subject:
	• Create a macro ABS which replaces its argument by it absolute value:
		#define ABS(Value)
*/

#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(Value) ((Value) < 0 ? -(Value) : (Value))
#endif//FT_ABS_H
