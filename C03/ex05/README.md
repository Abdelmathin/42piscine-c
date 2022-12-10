# Exercise 05:
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
