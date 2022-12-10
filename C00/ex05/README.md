# Exercise 05:
	• Turn-in directory : ex05/
	• Files to turn in  : ft_print_comb.c
	• Allowed functions : write
# Subject:
	• Create a function that displays all different combinations of three
		different digits in ascending order, listed by ascending order - yes,
		repetition is voluntary.
	• Here’s the intended output :
		$>./a.out | cat -e
		012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
	• 987 isn’t there because 789 already is.
	• 999 isn’t there because the digit 9 is present more than once.
	• Here’s how it should be prototyped :
		void ft_print_comb(void);
