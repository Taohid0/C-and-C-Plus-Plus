#include <bits/stdc++.h>

using namespace std;

struct info
{
    int r,m,number;
};
void print_page(info arr[],int sg)
{
    for(int i = 0;i<sg;i++)
    {
        cout<<arr[i].number<< " "<<arr[i].r<< " "<<arr[i].m<<endl;
    }

    cout<<endl;
}
int main()
{
    info arr[1000];
    int n,total_page,number,interval;

    cout<<"number of pages in the memory"<<endl;
    cin>>n;

    total_page =n;

    cout<<"enter page number, R and M bit"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i].number>>arr[i].r>>arr[i].m;
    }
    cout<<"enter time to reset"<<endl;
    cin>>interval;

    cout<<"Enter number of page faults"<<endl;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cout<<"Enter status of R and M bit for all pages in last "<<interval<<" ms"<<endl;
        for(int k =0;k<total_page;k++)
        {
            cout<<arr[k].number<<" : ";
            cin>>arr[k].r>>arr[k].m;
        }
        cout<<"Enter page number"<<endl;
        cin>>number;
        int j;
        for(j=0;j<total_page;j++)
        {
            if(arr[j].r==0 and arr[j].m==1)
            {
                arr[j].number=number;
                arr[j].r = 0;
                arr[j].m = 0;
                break;
            }
        }
        if(j==total_page)
        {
            cout<<"There is no page to replace in this iteration"<<endl;
        }

        print_page(arr,total_page);
    }
    return 0;
}
