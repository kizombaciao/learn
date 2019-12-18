#include <stdio.h>

int main()
{
	int *p1;
	int **p2;
	int n1 = 111;

	p1 = &n1;
	*p2 = &n1;

//	printf("%d\n", **p2);
	printf("%p\n", *p2);
	printf("%p\n", &n1);
	printf("%p\n", p2);
	printf("%p\n", &p1);

	p2 = &p1;
	printf("%p\n", p2);
	printf("%p\n", &p1);
}



struct s_node *func(struct s_node *r)
{
	struct s_node **p;

	*`p = 0;

}

