#include <bits/stdc++.h>

using namespace std;

int main()
{int n,item;

    struct node{
            int data;
            node *next;
            };
    node *nptr,*tptr,*list;
    list = NULL;

    cout << "how many data do you want to enter ?" << endl;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>item;
        nptr = new(node);
        nptr->data = item;
        nptr->next = NULL;

        if(list==NULL)
        {
            list = nptr;
            tptr = nptr;
        }
        else
        {
            tptr->next = nptr;
            tptr = nptr;
        }}
        tptr = list;

        for(int i= 0;i<n;i++)
        {
            cout<<tptr->data;
            tptr=  tptr->next;
            cout<<" " ;
        }

    return 0;
}
