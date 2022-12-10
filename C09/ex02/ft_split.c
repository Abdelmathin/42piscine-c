/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <abdelmathinhabachi@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 03:31:06 by ahabachi          #+#    #+#             */
/*   Updated: 2022/07/31 03:31:08 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# Exercise 02:
	• Turn-in directory : ex02/
	• Files to turn in  : ft_split.c
	• Allowed functions : malloc
# Subject:
	Create a function that splits a string of character depending on another
		string of characters.
	• You’ll have to use each character from the string charset as a separator.
	• The function returns an array where each element of the array contains
		the address of a string wrapped between two separators. The last element
		of that array should equal to 0 to indicate the end of the array.
	• There cannot be any empty strings in your array. Get your own conclusions
		accordingly.
	• The string given as argument won’t be modifiable.
	• Here’s how it should be prototyped :
		char **ft_split(char *str, char *charset);
# Algorithm:
	[Begin]
	• If `str` contains only separators, returns an empty array.
	• Removes separators from both ends of a `str`.
	• If there is no separator, returns an array of size 1 containing
		the entire `str`.
	• Count the number of words in `str`.
	• Create an array of string, of size `number of words + 1`.\
	• Copy each part between two separators.
	• Set the last element in the array to 0 to indicate the end of the array. 
	[End]
*/

#include <stdlib.h> 

int	ft_contains(char c, char *charset)
{
	while (c && *charset && *charset != c)
		charset++;
	return ((*charset == c) * (c != 0));
}

char	**ft_array(int len)
{
	int		pos;
	char	**array;

	array = (char **) malloc((sizeof (char *)) * (len + 1));
	if (!array)
		return (0);
	pos = -1;
	while (++pos <= len)
		array[pos] = 0;
	return (array);
}

char	*ft_chrcpy(char	*str, char	*charset)
{
	int		pos;
	int		len;
	char	*new_str;

	len = 0;
	while (str[len] && ft_contains(str[len], charset) == 0)
		len++;
	new_str = (char *) malloc((sizeof (char)) * (len + 1));
	pos = 0;
	while (pos < len)
	{
		new_str[pos] = str[pos];
		pos++;
	}
	new_str[pos] = 0;
	return (new_str);
}

char	**ft_load(char **array, char *str, int len, char *charset)
{
	int	array_len;
	int	pos;

	pos = 0;
	array_len = 1;
	while (pos < len)
	{
		if (ft_contains(str[pos], charset))
		{
			while ((pos < len) && ft_contains(str[pos], charset))
				pos++;
			array_len++;
		}
		if ((array != NULL) && (pos < len))
			array[array_len - 1] = ft_chrcpy(str + pos, charset);
		while ((pos < len) && (!ft_contains(str[pos], charset)))
			pos++;
	}
	if (array == NULL)
		return (ft_array(array_len));
	return (array);
}

char	**ft_split(char *str, char *charset)
{
	int		pos;
	int		len;
	char	**array;

	pos = 0;
	len = 0;
	while ((str != NULL) && ft_contains(str[pos], charset))
		pos += 1;
	while ((str != NULL) && str[len])
		len++;
	while ((str != NULL) && ft_contains(str[len - 1], charset))
		len -= 1;
	if ((str == NULL) || (len <= pos))
		return (ft_array(1));
	array = ft_load(NULL, str + pos, len, charset);
	return (ft_load(array, str + pos, len, charset));
}
