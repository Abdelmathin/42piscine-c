# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/31 02:46:14 by ahabachi          #+#    #+#              #
#    Updated: 2022/07/31 02:46:15 by ahabachi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#By: Abdelmathin Habachi

SOURCES	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJECTS	= ${SOURCES:.c=.o}
FLAGS	= -Wall -Wextra -Werror
LIBNAME	= libft.a
COMPILE	= ar rc
CC		= cc
REMOVE	= rm -rf
INCDIR	= includes

#The Makefile should also implement the following rules: clean, fclean, re, all and of course libft.a.

# compilin...
.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCDIR}

#libft.a rule
${LIBNAME}: ${OBJECTS}
	${COMPILE} ${LIBNAME} ${OBJECTS}

#Running just make should be equal to make all
all:	${LIBNAME}

#The rule clean should remove all the temporary generated files
clean:
	${REMOVE} ${OBJECTS}

#The rule fclean should be like a make clean plus all the binary made with make all.
fclean:	clean
	${REMOVE} ${LIBNAME}

#The rule `re` should be like a make `fclean` followed by make `all`
re:	fclean all