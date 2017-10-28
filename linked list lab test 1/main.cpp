#include <bits/stdc++.h>

using namespace std;

int main()
{   int n,item;

     struct node
     {
         int data;
         node *next;
     };
     node *tptr,*nptr,*list;
     list = NULL;


     cout<<"how many numbers do you want to enter ?";
     cin>>n;

     while(n--)
     {
         cin>>item;
         nptr = new(node);
         nptr->data = item;
         nptr->next = NULL;

         if(list==NULL)
         {
             list = nptr;
             tptr  = nptr;
         }
         else
         {
             tptr->next = nptr;
             tptr = nptr;

         }
     }


     tptr = list;
     while(1)
     {
         cout<<tptr->data<<" ";
         tptr = tptr->next;

         if(tptr==NULL)
         {
             break;
         }
     }
    return 0;
}
