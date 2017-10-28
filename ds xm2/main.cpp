#include <bits/stdc++.h>

using namespace std;

int main()
{
    struct node
    {
        int data;
        node *next,*back;
    };

    node *list,*tptr,*nptr;

    int item;
    list = NULL;

    for(int i  = 0;i<5;i++)
    {
        cin>>item;

        nptr  = new(node);
        nptr->data =item;
        nptr->next = NULL;
        nptr->back = NULL;

        if(list==NULL)
        {
            list = nptr;
            tptr = nptr;
        }
        else
        {
            nptr ->back = tptr;
            tptr->next = nptr;

            tptr = nptr;
        }
    }

   tptr = list;

    while(tptr!=NULL)
    {
        cout<<tptr->data<<" " ;
        tptr = tptr->next;
    }
    return 0;
}
