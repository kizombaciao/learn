#include <stdio.h>

int main()
{
	// 1
	printf("\n%d", 0);
	printf("\n%d", -7);
	printf("\n%d", 1560133635);
	printf("\n%d", -2035065302);
	printf("\n");

	/*
0
-7
1560133635
-2035065302	
	*/

	// 2, WIDTH OF 5
	printf("\n%5d", 0);
	printf("\n%5d", -7);
	printf("\n%5d", 1560133635);
	printf("\n%5d", -2035065302);
	printf("\n");

/*
    0
   -7
1560133635
-2035065302
*/

	// 3, LEFT JUSTIFIED
	printf("\n%-5d", 0);
	printf("\n%-5d", -7);
	printf("\n%-5d", 1560133635);
	printf("\n%-5d", -2035065302);
	printf("\n");

/*
0
-7
1560133635
-2035065302
*/

	// 4, ZERO-FILL
	printf("\n%05d", 0);
	printf("\n%05d", -7);
	printf("\n%05d", 1560133635);
	printf("\n%05d", -2035065302);
	printf("\n");

/*
00000
-0007
1560133635
-2035065302
*/

	// 5, PLUS SIGN
	printf("\n%+5d", 0);
	printf("\n%+5d", -7);
	printf("\n%+5d", 1560133635);
	printf("\n%+5d", -2035065302);
	printf("\n");

/*
   +0
   -7
+1560133635
-2035065302
*/

	// 6, SHOW PLUS SIGN AND MINUS SIGN
	printf("\n%+-5d", 0);
	printf("\n%+-5d", -7);
	printf("\n%+-5d", 1560133635);
	printf("\n%+-5d", -2035065302);
	printf("\n");

/*
+0
-7
+1560133635
-2035065302
*/

	// 7, INVISIBLE PLUS SIGN AND MINUS SIGN
	printf("\n% -5d", 0);
	printf("\n% -5d", -7);
	printf("\n% -5d", 1560133635);
	printf("\n% -5d", -2035065302);
	printf("\n");

/*
 0
-7
 1560133635
-2035065302
*/

	// 8, A SPACE IN FRONT IF POSITIVE OTHERWISE A MINUS
	printf("\n% 05d", 0);
	printf("\n% 05d", -7);
	printf("\n% 05d", 1560133635);
	printf("\n% 05d", -2035065302);
	printf("\n");

/*
 0000
-0007
 1560133635
-2035065302
*/
	// 9, SAME RESULT AS ABOVE
	printf("\n%0 5d", 0);
	printf("\n%0 5d", -7);
	printf("\n%0 5d", 1560133635);
	printf("\n%0 5d", -2035065302);
	printf("\n");

/*
 0000
-0007
 1560133635
-2035065302
*/

	// 10, PLUS WITH ZERO-FILL AND MINUS WITH ZERO-FILL
	printf("\n%+05d", 0);
	printf("\n%+05d", -7);
	printf("\n%+05d", 1560133635);
	printf("\n%+05d", -2035065302);
	printf("\n");

/*
+0000
-0007
+1560133635
-2035065302
*/
	// 11, SAME
	printf("\n%0+5d", 0);
	printf("\n%0+5d", -7);
	printf("\n%0+5d", 1560133635);
	printf("\n%0+5d", -2035065302);
	printf("\n");

/*
*/

	return (0);
/*
+0000
-0007
+1560133635
-2035065302
*/
}

/*
** none, print normally (r justify, space fill)
** -, l justify
** 0, leading zero fill
** +, print plus on positive nubmers
** space, invisible plus sign
*/