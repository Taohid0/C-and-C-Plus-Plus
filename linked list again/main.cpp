#include <bits/stdc++.h>

using namespace std;

int main()
{   int n,item;

    struct node
    {
        int data;
        node *next;
    };
    node *lst,*nptr,*pttr;
    lst=NULL;

    cout << "enter the number of nodes : " << endl;
    cin>>n;



    for(int i = 1;i<=n;i++)
    {
        cin>>item;

        nptr = new (node);
        nptr->data = item;
        nptr->next = NULL;

        if(lst==NULL)
        {
            lst = nptr;
            pttr  = nptr;
        }
        else
        {
            pttr->next = nptr;
            pttr = nptr;
        }
        }
        pttr = lst;

        for(int i = 1;i<=n;i++)
        {
            cout<<pttr->data<< " ";
            pttr = pttr->next;
        }


    return 0;
}
