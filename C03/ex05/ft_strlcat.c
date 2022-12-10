/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:56:48 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/21 22:46:57 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercice 05:
	• Turn-in directory : ex05/
	• Files to turn in  : ft_strlcat.c
	• Allowed functions : None
# Subject:
	• Reproduce the behavior of the function strlcat (man strlcat).
	• Here’s how it should be prototyped :
		unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
# Description:
	The `strlcat` function appends the NUL-terminated string `src` to the end
	of `dest`. It will append at most `size` − strlen(`dest`) − 1 bytes,
	NUL-terminating the result.
# Algorithm:
	The `strlcat` function returns :
		• `size` + strlen(`src`), if size <= strlen(`dest`)
		• strlen(`dest`) + strlen(`src`), otherwise.
	• Get the length of the `dest` and compare it to the `size`.
	• Append at most `size` − strlen(`dest`) − 1 bytes.
	• You should include a byte for the NUL in size.
*/

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= size)
		return (size + src_len);
	i = 0;
	while ((src[i]) && (i < (size - dest_len - 1)))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (dest_len + src_len);
}
