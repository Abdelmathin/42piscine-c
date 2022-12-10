# Exercise 02:
	• Turn-in directory : ex02/
	• Files to turn in  : ft_ultimate_range.c
	• Allowed functions : malloc
# Subject:
	• Create a function ft_ultimate_range which allocates and assigns an array
		of ints. This int array should contain all values between min and max.
	• Min included - max excluded.
	• Here’s how it should be prototyped :
		int ft_ultimate_range(int **range, int min, int max)
	• The size of range should be returned (or -1 on error).
	• If the value of min is greater or equal to max’s value, range will point
		on NULL and it should return 0.
