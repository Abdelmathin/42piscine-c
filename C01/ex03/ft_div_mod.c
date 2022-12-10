/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:26:29 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 11:29:53 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 03:
	• Turn-in directory : ex03/
	• Files to turn in  : ft_div_mod.c
	• Allowed functions : None
# Subject:
	• Create a function ft_div_mod prototyped like this :
		void ft_div_mod(int a, int b, int *div, int *mod)
	• This function divides parameters a by b and stores the result in the int
		pointed by div. It also stores the remainder of the division of a by b
		in the int pointed by mod.
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return ;
	*div = a / b;
	*mod = a % b;
}
