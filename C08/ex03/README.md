# Exercice 03:
	• Turn-in directory : ex03/
	• Files to turn in  : ft_point.h
	• Allowed functions : None
# Subject:
	• Create a file ft_point.h that’ll compile the following main:
		
		#include "ft_point.h"

		void set_point(t_point *point)
		{
			point->x = 42;
			point->y = 21;
		}

		int main(void)
		{
			t_point point;
			set_point(&point);
			return (0);
		}
