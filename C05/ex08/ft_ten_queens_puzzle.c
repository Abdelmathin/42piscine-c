/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:22:51 by ahabachi          #+#    #+#             */
/*   Updated: 2022/08/08 23:22:52 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 08:
	• Turn-in directory : ex08/
	• Files to turn in  : ft_ten_queens_puzzle.c
	• Allowed functions : write
# Subject:
	• Create a function that displays all possible placements of the ten queens
		on a chessboard which would contain ten columns and ten lines, without
		them being able to reach each other in a single move, and returns the
		number of possibilities.
	• Recursivity is required to solve this problem.
	• Here’s how it should be prototyped :
		int ft_ten_queens_puzzle(void);
	• Here’s how it’ll be displayed :
	$>./a.out | cat -e
		0257948136$
		0258693147$
		...
		4605713829$
		4609582731$
		...
		9742051863$
	$>
	• The sequence goes from left to right. The first digit represents the first
		Queen’s position in the first column (the index starting from 0). The Nth
		digit represents the Nth Queen’s position in the Nth column.
	• The return value must be the total number of displayed solutions.

*/

#include <unistd.h>

int	ft_put_placements(char *chessboard)
{
	int	i;

	i = 0;
	while (i < 10)
		i += write(1, chessboard + i, 1);
	return (write(1, "\n", 1));
}

int	ft_right_placements(char *b, char r, char c)
{
	int	i;

	i = 0;
	while ((i < r) && (b[i] != c) && (b[i] - i != c - r) && (b[i] + i != c + r))
		i++;
	return (i == r);
}

unsigned int	ft_backtrack(char *chessboard, int row)
{
	char			c;
	unsigned int	pos;

	if (row == 10)
		return (ft_put_placements(chessboard));
	c = '0' - 1;
	pos = 0;
	while (++c <= '9')
	{
		if (!ft_right_placements(chessboard, row, c))
			continue ;
		chessboard[row] = c;
		pos += ft_backtrack(chessboard, row + 1);
	}
	return (pos);
}

void	ft_memnset(char *mem, char c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		mem[i] = c;
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	chessboard[10];

	ft_memnset(chessboard, 0, 10);
	return (ft_backtrack(chessboard, 0));
}
