#include <stdio.h>
#include <stdlib.h>

/*
void func(int matrix[][2])
{
    printf("%d\n", matrix[1][1]);
}
*/
void func2(int **tab)
{
    printf("%d\n", tab[1][1]);
}

int main()
{
	int **tab;
    //int matrix[2][2] = {   {1, 2},
    //		                {3, 4}  };
    
    //printf("111a %lu\n", sizeof(int[2]));
    //printf("111b %lu\n", sizeof(int *));

    tab = (int **)malloc(sizeof(int *) * 2);
    for (int i = 0; i < 2; i++)
    {
    	tab[i] = (int *)malloc(sizeof(int) * 2);
    }
    for (int i = 0; i < 2; i++)
    {
    	for (int j = 0; j < 2; j++)
    	{
    		tab[i][j] = i + j;
    	}
    }
    func2(tab);

    //func(matrix);
}