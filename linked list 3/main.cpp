#include <bits/stdc++.h>

using namespace std;

int main()
{int item,n;

struct node
{
    int data;
    node *next;
};

    node *list,*nptr,*tptr;

    list=   NULL;

    cout << "enter the number of nodes : " << endl;
    cin>>n;

    cout<<"enter the nodes : ";

    for(int i=  0;i<n;i++)
    {
        cin>>item;

        nptr = new (node);

        nptr->data= item;
        nptr->next = NULL;

        if(list==NULL)
        {
            list = nptr;
            tptr= nptr;
        }
        else{
            tptr->next= nptr;
            tptr = nptr;
        }
    }
    tptr = list;

    while(1)
   {
       cout<<tptr->data<<" ";
       tptr  = tptr->next;

       if(tptr->next==NULL)
       {cout<<tptr->data<<" ";
           break;
       }

   }
    return 0;
}
