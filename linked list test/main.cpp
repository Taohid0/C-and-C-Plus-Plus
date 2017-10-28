#include <bits/stdc++.h>

using namespace std;

int main()
{   int item,n;

    struct node{
    int data;
    node *next;
    };
    node *list,*tptr,*nptr;

    cout<<"how many values do you want to enter ?";
    cin>>n;

    list = NULL;

    for(int i = 1;i<=n;i++)
    {
        cin>>item;
        nptr = new(node);
        nptr->data = item;
        nptr->next =NULL;

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

    while(1)
    {
        cout<<tptr->data<< " ";
        if(tptr->next==NULL){
            break;
        }
        tptr = tptr->next;

    }
//    cout<<"which number do you want to insert ? ";
//    cin>>item;
//
//    nptr = new (node);
//    nptr->data = item;
//    nptr->next = list;
//    list =nptr;
//
//     tptr = list;
//    while(1)
//    {
//        cout<<tptr->data<< " ";
//        if(tptr->next==NULL){
//            break;
//        }
//        tptr = tptr->next;
//
//    }
//  cout<<"which number do you want to enter after the last position ? ";
//  cin>>item;
//
//  nptr = new (node);
//  nptr->data = item;
//  nptr->next = NULL;
//
//  tptr = list;
//  while(1)
//    {
//       // cout<<tptr->data<< " ";
//        if(tptr->next==NULL){
//                tptr->next = nptr;
//            break;
//        }
//        tptr = tptr->next;
//
//    }
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
//  cout<<"which number do you want to enter ? ";
//  cin>>item;
//
//  tptr = list;
//  while(tptr->next->data<item)
//  {
//         tptr = tptr->next;
//  }
//  nptr =  new (node);
//  nptr->data = item;
//  nptr->next = tptr->next;
//  tptr->next = nptr;
//
// tptr = list;
//  while(1)
//    {
//        cout<<tptr->data<< " ";
//        if(tptr->next==NULL){
//                tptr->next = nptr;
//            break;
//        }
//        tptr = tptr->next;
//
//    }

 cout<<"which number do you want to delete ?";
 cin>>item;

 node *pptr;
 tptr = list;
 pptr = list;

 while(tptr->data!=item)
 {
     pptr = tptr;
     tptr = tptr->next;
 }
 pptr->next = tptr->next;
 delete(tptr);

 tptr = list;
   while(1)
    {
        cout<<tptr->data<< " ";
        if(tptr->next==NULL){
                tptr->next = nptr;
            break;
        }
        tptr = tptr->next;

    }
    return 0;
}
