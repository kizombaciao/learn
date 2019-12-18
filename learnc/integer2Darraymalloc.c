
#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
	return(6);
}

int main()
{
	int n = 3;
	int **t;
	int i, j;

	t = (int **)malloc(sizeof(int *) * 6);
	for (i = 0; i < 6; i++)
	{
		t[i] = (int *)malloc(sizeof(int) * (n));
	}

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < n; j++)
		{
			t[i][j] = 0;
			printf("222a %d %d\n", i, j);
 		}
	}

}


	