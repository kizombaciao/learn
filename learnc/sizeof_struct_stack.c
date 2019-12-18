#include <stdio.h>

struct s_node {
	void          *content;
	struct s_node *next;
};

struct s_stack {
    //int num[10];
	struct s_node *top;
};

int main()
{
    printf("\n111a %lu", sizeof(struct s_stack)); // 8 bytes
    printf("\n111b %lu", sizeof(struct s_stack *)); // 8 bytes
    //printf("\n111b %lu", sizeof(struct s_stack *)); // 8 bytes

}