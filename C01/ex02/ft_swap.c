/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:24:09 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 11:25:14 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 02:
	• Turn-in directory : ex02/
	• Files to turn in  : ft_swap.c
	• Allowed functions : None
# Subject:
	• Create a function that swaps the value of two integers whose addresses are
		entered as parameters.
	• Here’s how it should be prototyped :
		void ft_swap(int *a, int *b)
*/

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
