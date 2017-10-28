#include<iostream>
#include<stdio.h>
#include<malloc.h>
using namespace std;

typedef struct node
{
    char data;
    struct node *left;
    struct node *right;
} node;
node *create()
{
    node *p;
    char x;
    printf("Enter data(-1 for no data):");
    scanf("%c",&x);
    if(x==-1)
        return NULL;
    p=(node*)malloc(sizeof(node));
    p->data=x;
    printf("Enter left child of %c:\n",x);
    p->left=create();
    printf("Enter right child of %c:\n",x);
    p->right=create();
    return p;
}
void preorder(node *t)
{
    if(t!=NULL)
    {
        printf("\n%c",t->data);
        preorder(t->left);
        preorder(t->right);
    }
}
int main()
{
    node *root;
    root=create();
    printf("\nThe preorder traversal of tree is:/n");
    preorder(root);
    return 0;
}
