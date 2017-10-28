#include <bits/stdc++.h>

using namespace std;

int main()
{
    struct node
    {
        int data;
        node *next;
    };

    int item,n;

    node *list,*nptr,*tptr;

    list = NULL;

    cout<<"enter the number of nodes : ";
    cin>>n;

    cout<<"enter the nodes : ";

    for(int i  = 0;i<n;i++)
    {
        cin>>item;

        nptr = new (node);

        nptr->data =item;
        nptr->next  = NULL;

        if(list==NULL)
        {
            list = nptr;
            tptr = nptr;
        }
        else
        {
            tptr->next = nptr;
            tptr = nptr;
        }

    }
    tptr = list;

    for(int i = 0;i<n;i++)
    {
        cout<<tptr->data<<" ";
        tptr = tptr->next;

    }
    return 0;
}
