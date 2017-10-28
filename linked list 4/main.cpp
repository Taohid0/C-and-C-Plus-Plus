#include <bits/stdc++.h>

using namespace std;

int main()
{   int item,n,n2;

    struct node
    {
        int data;
        node *next;
    };

    node *list,*nptr,*tptr,*tmp,*t;

    list =NULL;

    cout << "how many numbers do you want to store ? " << endl;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>item;

        nptr = new (node);
        nptr->data = item;
        nptr->next = NULL;

        if(list==NULL)
        {
            list=nptr;
            tptr = nptr;
        }
        else{
            tptr->next = nptr;
            tptr = nptr;
        }
    }
    tptr = list;
   t=NULL;
    while(1){
        cout<<tptr->data<<" ";
        tptr=tptr->next  ;

        if(tptr->next==NULL)
        {
            cout<<tptr->data<<endl;
            break;
        }
    }
    cout<<"which number do you want enter ?";
    cin>>n;
    tmp=NULL;

     tptr = list;
     while(1){
        cout<<tptr->data<<" ";


        if(tptr->data==n)
        {
          tptr->next = tmp;
          break;
        }
       tmp = tptr->next;
       tptr = tptr->next;
    }

    tptr = list;
    cout<<"OK";
    while(1){
        cout<<tptr->data<<" ";
        tptr=tptr->next  ;

        if(tptr->next==NULL)
        {
            cout<<tptr->data;
            break;
        }}

    return 0;
}
