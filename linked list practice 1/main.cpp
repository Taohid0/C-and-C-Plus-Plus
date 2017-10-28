#include <bits/stdc++.h>

using namespace std;

int main()
{   int value,nodes;

    struct node{
            int data;
            node *next;
            };
     node *list,*nptr,*tptr;
     list = NULL;

     cout<<"how many nodes do you want to enter ? ";
     cin>>nodes;

     while(nodes--)
     {
         cin>>value;

         nptr = new(node);
         nptr->data  = value;
         nptr->next  = NULL;

         if(list==NULL)
         {
             list = nptr;
             tptr = nptr;
         }
         else{
            tptr->next = nptr;
            tptr = nptr;
         }
     }

     int to_find;

     cout<<"which number do you want to delete?";
     cin>>to_find;


        tptr = list;

      while(tptr->next->data!=to_find)
      {
          tptr = tptr->next;
      }

      tptr->next =tptr->next->next;
      delete(tptr->next);

      tptr = list;
     while(1)
     {
         cout<<tptr->data<< " ";
         tptr = tptr->next;


         if(tptr==NULL)
         {
             break;
         }

     }

//     while(tptr->data!=to_find &&  tptr->next!=NULL)
//     {
//         tptr = tptr->next;
//     }
//
//     if(tptr->data==to_find)
//     {
//         cout<<to_find<< " is found";
//     }
//     else
//     {
//         cout<<to_find<<" is not found";
//     }

    return 0;
}
