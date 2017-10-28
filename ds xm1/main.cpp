#include <bits/stdc++.h>

using namespace std;

int main()
{  int item;

    struct node
    {
        int data;
        node *next;
    };
    node *list,*nptr,*tptr;

    list=NULL;

    for(int i = 0;i<5;i++)
    {
       cin>>item;

       nptr = new(node);
       nptr->data = item;
       nptr->next = NULL;

       if(list==NULL)
       {
        list=nptr;
        tptr = nptr;
       }
       else
       {
           tptr->next = nptr;
           tptr = nptr;
       }
    }
   cin>>item;

    tptr =list;

    while(tptr->data!=item && tptr->next!=NULL)
    {
        tptr=tptr->next;
    }
    if(tptr->data==item)
    {
        cout<<"found";
    }
    else
        cout<<"not found";
    return 0;
}
