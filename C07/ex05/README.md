# Exercice 05:
	• Turn-in directory : ex05/
	• Files to turn in  : ft_split.c
	• Allowed functions : malloc
# Subject:
	• Create a function that splits a string of character depending on another
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
