#include <stdio.h>
#include <stdlib.h>
//#define MAX(x, y) x > y ? x : y

int MAX(int x, int y)
{
    if (x > y)
        return (x);
    else
        return (y);
}

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int data)
{
    struct node *p;

    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return (p);
}

int findheight(struct node *root)
{
    if (root == NULL)
        return (-1);
    return (1 + MAX(findheight(root->left), findheight(root->right)));
}

int main()
{
    struct node *p;
    int h;

    p = create(1);
    p->left = create(2);
    p->left->left = create(3);
    p->left->right = create(5);
    p->left->right->left = create(6);
    p->left->right->right = create(7);
    p->right = create(4);

    h = findheight(p);
    printf("\n111a %d", h);
    return (0);
}