#include <bits/stdc++.h>

using namespace std;

int main()
{
    int item,n;

    struct node
    {
        int data;
        node *back,*next;
    };

    node *nptr,*tptr,*list;

    list=NULL;
    cout<<"how many numbers do you want to enter ?";
    cin>>n;

    for(int i = 1;i<=n;i++){
        cin>>item;

        nptr = new(node);
        nptr->data = item;
        nptr->back = NULL;
        nptr->next = NULL;
        if(list==NULL)
        {
            list = nptr;
            tptr = nptr;
        }
        else
        {
               tptr->next = nptr;
               nptr->back = tptr;
               tptr = nptr;
        }
    }
//    tptr = list;
//    while(1)
//    {
//        cout<<tptr->data<< " ";
//        if(tptr->next==NULL){
//            break;
//        }
//        tptr = tptr->next;
//
//    }

    while(1)
    {
        cout<<tptr->data<< " ";
        if(tptr->back==NULL){
            break;
        }
        tptr = tptr->back;

    }
    return 0;
}
