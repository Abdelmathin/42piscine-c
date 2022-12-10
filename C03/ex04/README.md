# Exercice 04:
	• Turn-in directory : ex04/
	• Files to turn in  : ft_strstr.c
	• Allowed functions : None
# Subject:
	• Reproduce the behavior of the function strstr (man strstr).
	• Here’s how it should be prototyped :
		char	*ft_strstr(char *str, char *to_find)
# Description
	The strstr function returns :
		• a pointer to the located string,
		• a null pointer if the `to_find` is not found.
		If `to_find` points to a string with zero length:
			the function returns `str`.
