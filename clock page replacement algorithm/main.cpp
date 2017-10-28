#include <bits/stdc++.h>

using namespace std;

struct info{
string page_number;
int r;
};

void print_page(info arr[],int sg)
{
    for(int i = 0;i<sg;i++)
    {
        cout<<arr[i].page_number<<" "<<arr[i].r<<endl;
    }
    cout<<endl;
}

int main()
{
    info arr[1000];
    int n,interval,counter = 1,total_page;
    string page_number;

    cout<<"Number of pages in the memory "<<endl;
    cin>>n;
    total_page =n;
    cout<<"enter page number and r bit"<<endl;

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i].page_number>>arr[i].r;
    }
    cout<<"Enter interval time "<<endl;
    cin>>interval;
    cout<<"Enter number of new pages to enter"<<endl;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        for(int i = 0;i<total_page;i++)
        {
            arr[i].r =0;
        }
        cout<<"how many pages are referenced in last "<<interval<<" ms"<<endl;
        int n2;
        cin>>n2;

        cout<<"Enter referenced pages number"<<endl;

        while(n2--)
        {
            cin>>page_number;
            for(int i = 0;i<total_page;i++)
            {
                if(arr[i].page_number==page_number)
                {
                    arr[i].r=1;
                    break;
                }
            }
        }
        cout<<"Enter new page number"<<endl;
        cin>>page_number;
        int j;
        for(j = 0;j<total_page;j++)
        {
            if(arr[j].r==0)
            {
                arr[j].r=1;
                arr[j].page_number =page_number;
                break;
            }
        }
        if(j==total_page)
        {
            cout<<"All pages are referred in last "<<interval<<" ms"<<endl;
        }
        cout<<"present pages in the memory after insertion "<<counter<<endl;
        print_page(arr,total_page);
    }
    return 0;
}
