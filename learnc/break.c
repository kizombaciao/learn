#include <stdio.h>

int main()
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			break;
		printf("%d\n", i);
	}
}

/*
When a break statement is encountered inside a loop, 
the loop is immediately terminated 
and the program control resumes at the next statement following the loop.
*/