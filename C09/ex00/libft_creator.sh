# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 23:23:17 by ahabachi          #+#    #+#              #
#    Updated: 2022/07/30 23:23:19 by ahabachi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

files="ft_putchar ft_swap ft_putstr ft_strlen ft_strcmp"
ofiles=""
for file in `echo $files | tr " " "\n"`;
do
	if [ ! -e $file.c ] ;
	then
		echo "file not found : $file.c"
		exit		
	fi
done

if [ -e libft.a ] ;
then
	rm -rf libft.a
fi

for ofile in `echo $files | tr " " "\n"`;
do
	if [ -e $ofile.o ] ;
	then
		rm -rf $ofile.o
	fi
done

for cfile in `echo $files | tr " " "\n"`;
do
	if [ -e $cfile.c ] ;
	then
		gcc -c $cfile.c
		ofiles="$ofiles $cfile.o"
	fi
done

`echo "ar rc libft.a$ofiles"`

for ofile in `echo $files | tr " " "\n"`;
do
	if [ -e $ofile.o ] ;
	then
		rm -rf $ofile.o
	fi
done
