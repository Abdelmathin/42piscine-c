#  **************************************************************************  #
#                                                                              #
#                                                          :::      ::::::::   #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 00:08:36 by ahabachi          #+#    #+#              #
#    Updated: 2022/11/08 01:11:06 by ahabachi         ###   ########.fr        #
#                                                                              #
#  **************************************************************************  #

# ORIGINAL_FILES #
ORIGINAL_FILES			=	C00/ex00/README.md\
							C00/ex00/ft_putchar.c\
							C00/ex01/README.md\
							C00/ex01/ft_print_alphabet.c\
							C00/ex02/README.md\
							C00/ex02/ft_print_reverse_alphabet.c\
							C00/ex03/README.md\
							C00/ex03/ft_print_numbers.c\
							C00/ex04/README.md\
							C00/ex04/ft_is_negative.c\
							C00/ex05/README.md\
							C00/ex05/ft_print_comb.c\
							C00/ex06/README.md\
							C00/ex06/ft_print_comb2.c\
							C00/ex07/README.md\
							C00/ex07/ft_putnbr.c\
							C00/ex08/README.md\
							C00/ex08/ft_print_combn.c\
							C01/ex00/README.md\
							C01/ex00/ft_ft.c\
							C01/ex01/README.md\
							C01/ex01/ft_ultimate_ft.c\
							C01/ex02/README.md\
							C01/ex02/ft_swap.c\
							C01/ex03/README.md\
							C01/ex03/ft_div_mod.c\
							C01/ex04/README.md\
							C01/ex04/ft_ultimate_div_mod.c\
							C01/ex05/README.md\
							C01/ex05/ft_putstr.c\
							C01/ex06/README.md\
							C01/ex06/ft_strlen.c\
							C01/ex07/README.md\
							C01/ex07/ft_rev_int_tab.c\
							C01/ex08/README.md\
							C01/ex08/ft_sort_int_tab.c\
							C02/ex00/README.md\
							C02/ex00/ft_strcpy.c\
							C02/ex01/README.md\
							C02/ex01/ft_strncpy.c\
							C02/ex02/README.md\
							C02/ex02/ft_str_is_alpha.c\
							C02/ex03/README.md\
							C02/ex03/ft_str_is_numeric.c\
							C02/ex04/README.md\
							C02/ex04/ft_str_is_lowercase.c\
							C02/ex05/README.md\
							C02/ex05/ft_str_is_uppercase.c\
							C02/ex06/README.md\
							C02/ex06/ft_str_is_printable.c\
							C02/ex07/README.md\
							C02/ex07/ft_strupcase.c\
							C02/ex08/README.md\
							C02/ex08/ft_strlowcase.c\
							C02/ex09/README.md\
							C02/ex09/ft_strcapitalize.c\
							C02/ex10/README.md\
							C02/ex10/ft_strlcpy.c\
							C02/ex11/README.md\
							C02/ex11/ft_putstr_non_printable.c\
							C02/ex12/README.md\
							C02/ex12/ft_print_memory.c\
							C03/ex00/README.md\
							C03/ex00/ft_strcmp.c\
							C03/ex01/README.md\
							C03/ex01/ft_strncmp.c\
							C03/ex02/README.md\
							C03/ex02/ft_strcat.c\
							C03/ex03/README.md\
							C03/ex03/ft_strncat.c\
							C03/ex04/README.md\
							C03/ex04/ft_strstr.c\
							C03/ex05/README.md\
							C03/ex05/ft_strlcat.c\
							C04/ex00/README.md\
							C04/ex00/ft_strlen.c\
							C04/ex01/README.md\
							C04/ex01/ft_putstr.c\
							C04/ex02/README.md\
							C04/ex02/ft_putnbr.c\
							C04/ex03/README.md\
							C04/ex03/ft_atoi.c\
							C04/ex04/README.md\
							C04/ex04/ft_putnbr_base.c\
							C04/ex05/README.md\
							C04/ex05/ft_atoi_base.c\
							C05/ex00/README.md\
							C05/ex00/ft_iterative_factorial.c\
							C05/ex01/README.md\
							C05/ex01/ft_recursive_factorial.c\
							C05/ex02/README.md\
							C05/ex02/ft_iterative_power.c\
							C05/ex03/README.md\
							C05/ex03/ft_recursive_power.c\
							C05/ex04/README.md\
							C05/ex04/ft_fibonacci.c\
							C05/ex05/README.md\
							C05/ex05/ft_sqrt.c\
							C05/ex06/README.md\
							C05/ex06/ft_is_prime.c\
							C05/ex07/README.md\
							C05/ex07/ft_find_next_prime.c\
							C05/ex08/README.md\
							C05/ex08/ft_ten_queens_puzzle.c\
							C06/ex00/README.md\
							C06/ex00/ft_print_program_name.c\
							C06/ex01/README.md\
							C06/ex01/ft_print_params.c\
							C06/ex02/README.md\
							C06/ex02/ft_rev_params.c\
							C06/ex03/README.md\
							C06/ex03/ft_sort_params.c\
							C07/ex00/README.md\
							C07/ex00/ft_strdup.c\
							C07/ex01/README.md\
							C07/ex01/ft_range.c\
							C07/ex02/README.md\
							C07/ex02/ft_ultimate_range.c\
							C07/ex03/README.md\
							C07/ex03/ft_strjoin.c\
							C07/ex04/README.md\
							C07/ex04/ft_convert_base.c\
							C07/ex04/ft_convert_base2.c\
							C07/ex05/README.md\
							C07/ex05/ft_split.c\
							C08/ex00/README.md\
							C08/ex00/ft.h\
							C08/ex01/README.md\
							C08/ex01/ft_boolean.h\
							C08/ex02/README.md\
							C08/ex02/ft_abs.h\
							C08/ex03/README.md\
							C08/ex03/ft_point.h\
							C08/ex04/README.md\
							C08/ex04/ft_strs_to_tab.c\
							C08/ex05/README.md\
							C08/ex05/ft_show_tab.c\
							C09/ex00/README.md\
							C09/ex00/ft_putchar.c\
							C09/ex00/ft_putstr.c\
							C09/ex00/ft_strcmp.c\
							C09/ex00/ft_strlen.c\
							C09/ex00/ft_swap.c\
							C09/ex00/libft_creator.sh\
							C09/ex01/Makefile\
							C09/ex02/README.md\
							C09/ex02/ft_split.c\
							LICENSE\
							Makefile\
							README.md\
							ScreenShot.png\
							setup.py
# ORIGINAL_FILES #



# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

norm:
	@norminette -R CheckDefine

RESET_FILE		=	habachi_reset.py
define RESET_CODE
if (1):\n\
import os\n\
def split(s):\n\
\tret = [];\n\
\ts = s.replace('\\\t', ' ').replace('\\\n', ' ');\n\
\twhile ('  ' in s):\n\
\t\ts = s.replace('  ', ' ');\n\
\tfor f in s.split(' '):\n\
\t\twhile ('//' in f):\n\
\t\t\tf = f.replace('//', '/');\n\
\t\tf = f.strip();\n\
\t\tif (not f):continue;\n\
\t\twhile (f.startswith('./')):f = f.strip()[2:]\n\
\t\twhile (f.endswith('/')):f = f.strip()[:-1]\n\
\t\tf = f.strip();\n\
\t\tif ((f in ['.', '..', '.git']) or f.startswith('.git/')):\n\
\t\t\tcontinue;\n\
\t\tfilename = ''\n\
\t\tfor i in f.split('/'):\n\
\t\t\tfilename += i;\n\
\t\t\tret.append(filename);\n\
\t\tfilename+='/'\n\
\treturn (ret);\n\
\n\
def remove_file(filename):\n\
\tcmd = 'rm -rf \"' + filename + '\"';\n\
\tprint (cmd);\n\
\tos.system(cmd);\n\
\n\
ALL_FILES = split(ALL_FILES)\n\
ORIGINAL_FILES = split(ORIGINAL_FILES)\n\
\n\
for filename in ALL_FILES:\n\
\tif (not (filename in ORIGINAL_FILES)):\n\
\t\tremove_file (filename)\n
endef

reset:
	@echo "ALL_FILES = '" `find .` "'" > ${RESET_FILE}
	@echo "ORIGINAL_FILES = '${ORIGINAL_FILES}'" >> ${RESET_FILE}
	@echo "${RESET_CODE}" >> ${RESET_FILE}
	@python ${RESET_FILE}
	@rm -rf ${RESET_FILE}

push: reset
	@git add *
	@git commit -m "committed on '`date`' by '`whoami`', hostname = '`hostname`'"
	@git push

.PHONY: norm reset push