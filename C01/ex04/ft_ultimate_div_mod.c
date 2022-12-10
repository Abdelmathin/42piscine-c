/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:30:52 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 11:34:30 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 04:
	• Turn-in directory : ex04/
	• Files to turn in  : ft_ultimate_div_mod.c
	• Allowed functions : None
# Subject:
	• Create a function ft_ultimate_div_mod with the following prototype :
		void ft_ultimate_div_mod(int *a, int *b)

	• This function divides parameters a by b. The result of this division is
		stored in the int pointed by a. The remainder of the division is stored
		in the int pointed by b.
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dm[2];

	if (*b == 0)
		return ;
	dm[0] = *a / *b;
	dm[1] = *a % *b;
	*a = *dm;
	*b = *(dm + 1);
}	
