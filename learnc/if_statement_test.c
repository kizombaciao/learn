#include <stdio.h>

int func()
{
	return (555);
}

int main()
{
	int res;

	if ((res = func()) != 555)
	{
		printf("%d\n", res);
	}
}

/*
this will print if res != 555, that is, if func returns 555,
then 555 will not print.
*/