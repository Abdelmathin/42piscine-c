/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:29:10 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/27 10:29:10 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# ifndef TRUE
#  define TRUE 1
# endif//TRUE

# ifndef FALSE
#  define FALSE 0
# endif//FALSE

# ifndef SUCCESS
#  define SUCCESS 0
# endif//SUCCESS

typedef unsigned char	t_bool;

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

# define EVEN(c) ((c) % 2 == 0)

#endif//FT_BOOLEAN_H
