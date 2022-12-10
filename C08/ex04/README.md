# Exercice 04:
	• Turn-in directory : ex04/
	• Files to turn in  : ft_strs_to_tab.c
	• Allowed functions : malloc, free
# Subject:
	• Create a function that takes an array of string as argument and the size
		of this array.
	• Here’s how it should be prototyped:
		struct s_stock_str *ft_strs_to_tab(int ac, char **av)
	• It will transform each element of av into a structure.
	• The structure will be defined in the ft_stock_str.h file that we will
		provided, like this:

		typedef struct s_stock_str
		{
			int size;
			char *str;
			char *copy;
		} t_stock_str;
	• size being the length of the string
	• str being the string
	• copy being a copy of the string
	• It should keep the order of av
	• The returned array should allocated in memory and its last element’s str
		set to 0, this will mark the end of the array
	• It should return a NULL pointer if an error occurs.
	• We’ll test your function with our ft_show_tab (next exercise). Make it
		work according to this !
