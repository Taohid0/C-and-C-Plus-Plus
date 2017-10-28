#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    char data;
    node *left,*right;
};
 node *create()
 {

     node *p;
     char x;
     cin>>x;
     if(x=='x')
     {
         return NULL;
     }
     p =new (node);

     p->data = x;
     printf("enter left child of %c \n",x);
     p->left = create();
     printf("enter right child of %c\n",x);
     p->right = create();
     return p;

 }

 void preorder(node *t)

{
    if(t!=NULL)
    {
         preorder(t->left);
        printf("%c  ",t->data);

        preorder(t->right);
    }
}

int main()
{
    node *n;

    printf("enter x to get back previous node \n");

    n = create();

    preorder(n);
    return 0;
}
