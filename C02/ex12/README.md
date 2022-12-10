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
