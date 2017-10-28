#include <bits/stdc++.h>

using namespace std;

int main()
{   int value,numbers;

    struct node{
            int data;
            node *next,*bck;
            };

        node *list,*nptr,*tptr;
       list=NULL;
        cout<<"how many numbers do you want to enter ? " ;
        cin>>numbers;

        while(numbers--)
        {
            cin>>value;

            nptr = new (node);
            nptr->data = value;
            nptr->bck = NULL;
            nptr->next = NULL;

            if(list==NULL)
            {
                list = nptr;
                tptr = nptr;
            }
            else
            {
                tptr->next = nptr;
                nptr->bck= tptr;

                tptr = nptr;
            }
        }
        // tptr=list ;

        while(tptr!=NULL)
        {
            cout<<tptr->data<<" ";
            tptr = tptr->bck;

        }
    return 0;
}
