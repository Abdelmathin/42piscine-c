/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:01:16 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 15:01:19 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 12:
	• Turn-in directory : ex12/
	• Files to turn in  : ft_print_memory.c
	• Allowed functions : write
# Subject:
	• Create a function that displays the memory area onscreen.
	• The display of this memory area should be split into three "columns"
		separated by a space.
	• The hexadecimal address of the first line’s first character followed
		by a ’:’.
	• The content in hexadecimal with a space each 2 characters and should
		be padded with spaces if needed (see the example below).
	• The content in printable characters.
	• If a character is non-printable, it’ll be replaced by a dot.
	• Each line should handle sixteen characters.
	• If size equals to 0, nothing should be displayed.
	• Here’s how it should be prototyped :
		void *ft_print_memory(void *addr, unsigned int size)
	• It should return addr.
# Example:
	$> ./ft_print_memory
	000000010a161f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
	000000010a161f50: 6368 6573 090a 0963 2020 6573 7420 666f ches...c est fo
	000000010a161f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on
	000000010a161f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.
	000000010a161f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..
	000000010a161f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .
	$> ./ft_print_memory | cat -te
	0000000107ff9f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin$
	0000000107ff9f50: 6368 6573 090a 0963 2020 6573 7420 666f ches...c est fo$
	0000000107ff9f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on $
	0000000107ff9f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.$
	0000000107ff9f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..$
	0000000107ff9f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .$
	$>
*/

#include <unistd.h>

void	ft_putpstr(unsigned char *s, unsigned int pos, unsigned int size)
{
	unsigned int	nmax;

	nmax = 16;
	while (nmax-- && *s && pos < size)
	{
		if (31 < *s && *s < 127)
			write(1, s, 1);
		else
			write(1, ".", 1);
		s++;
		pos++;
	}
}

void	*ft_putaddr(void *addr)
{
	unsigned long	addr_pos;
	unsigned long	h;
	int				n;
	char			hexaddr[16];
	int				pos;

	h = 1;
	addr_pos = (unsigned long)addr;
	while (addr_pos / h)
		h *= 16;
	h /= 16;
	pos = 0;
	while (h)
	{
		n = (addr_pos / h);
		addr_pos = addr_pos - n * h;
		h /= 16;
		hexaddr[pos] = "0123456789abcdef"[n];
		pos++;
	}
	n = 0;
	while (n++ < 16 - pos)
		write(1, "0", 1);
	write(1, hexaddr, pos);
	return (addr);
}

void	*ft_putnmem(unsigned char *addr, unsigned int at, unsigned int len)
{	
	unsigned int	pos;
	char			*hexadecimals;

	hexadecimals = "0123456789abcdef";
	pos = 0;
	while (at < len && pos < 16 && addr[pos])
	{
		write(1, " ", (pos % 2 == 0));
		write(1, hexadecimals + (addr[pos] / 16), 1);
		write(1, hexadecimals + (addr[pos] - 16 * (addr[pos] / 16)), 1);
		pos++;
		at++;
	}
	while (pos < 16)
	{
		write(1, " ", (pos % 2 == 0));
		pos += write(1, "  ", 2) - 1;
	}
	write(1, " ", 1);
	return (0);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*content;
	unsigned int	pos;
	unsigned int	pol;

	content = addr;
	pos = 0;
	if (size < 1)
		return (addr);
	while (pos < size && *content)
	{
		ft_putaddr(content);
		write(1, ":", 1);
		ft_putnmem(content, pos, size);
		ft_putpstr(content, pos, size);
		write(1, "\n", 1);
		pos += 16;
		pol = 0;
		while (pol < 16 && *content)
		{
			content++;
			pol++;
		}
	}
	return (addr);
}
