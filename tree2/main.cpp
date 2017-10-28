#include<iostream>
#include<stdio.h>
#include<malloc.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;
node *create()
{
    node *p;
    int x;

    scanf("%d",&x);
    if(x==-1)
        return NULL;
    p=(node*)malloc(sizeof(node));
    p->data=x;
    printf("Enter left child of %d:\n",x);
    p->left=create();
    printf("Enter right child of %d:\n",x);
    p->right=create();
    return p;
}
void preorder(node *t)
{
    if(t!=NULL)
    {
        printf("\n%d",t->data);
        preorder(t->left);
        preorder(t->right);
    }
}
int main()
{
    node *root;
     printf("Enter data(-1 for no data):");
    root=create();
    printf("\nThe preorder traversal of tree is:n");
    preorder(root);
    return 0;
}
