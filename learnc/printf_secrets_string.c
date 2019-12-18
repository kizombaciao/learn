#include <stdio.h>

int main()
{
	// RIGHT JUSTIFY
	printf("\n%5s", "");
	printf("\n%5s", "a");
	printf("\n%5s", "ab");
	printf("\n%5s", "abcdefg");
	printf("\n");

/*

    a
   ab
abcdefg
*/

	// LEFT JUSTIFY
	printf("\n%-5s", "");
	printf("\n%-5s", "a");
	printf("\n%-5s", "ab");
	printf("\n%-5s", "abcdefg");
	printf("\n");

/*

a
ab
abcdefg
*/

	return (0);
}