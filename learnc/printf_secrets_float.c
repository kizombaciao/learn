#include <stdio.h>

int main()
{
	float e = 2.718281828;

	printf("\n%.0f", e);
	printf("\n%.0f.", e);
	printf("\n%.1f", e);
	printf("\n%.2f", e);
	printf("\n%.6f", e);
	printf("\n%f", e);
	printf("\n%.7f", e);
	printf("\n");

	// adding width
	printf("\n%5.0f", e);
	printf("\n%5.0f.", e);
	printf("\n%5.1f", e);
	printf("\n%5.2f", e);
	printf("\n%5.7f", e);
	printf("\n");

	// flags for left justification, leading zeros, plus signs, etc
	printf("\n%5.1f", e);
	printf("\n%-5.1f", e);
	printf("\n%+5.1f", e);
	printf("\n%+-5.1f", e);
	printf("\n%05.1f", e);
	printf("\n%+05.1f", e);
	printf("\n% 05.1f", e);
	printf("\n%- 5.1f", e);
	printf("\n");

	return (0);
}

/*
** precision is how many digits appear after decimal.
** Notice that if no dot and precision are specified for %f, 
	the default is %.6f (six digits after the decimal point
** Notice that if a precision of zero is specified, 
	the decimal point also disappears.
** Notice especially that 5.2 means a total width of five, 
	with two digits after the deci- mal.
*/

/*
DESIGN:
** 1. integer, float, string, character
** 2. how wide the field should be
		Usually this will be the size of the biggest number 
		you ever expect to print under normal cir- cumstances. 
		Sometimes this is controlled by the amount of space 
		that is provided on a pre-printed form
*/