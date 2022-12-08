/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:01:16 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/23 15:01:19 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
