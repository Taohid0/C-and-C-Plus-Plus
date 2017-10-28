#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[100005],cap;
    unsigned long long v = 0;
    int city,capital;
    cin>>city>>capital;
    int first;
    unsigned long long sum=0;
    cin>>first;
    int temp = first;
    arr[1]=first;
    sum+=first;
    for(int i = 2;i<=city;i++)
    {
        cin>>arr[i];
        v+=first*arr[i];
        first = arr[i];
       sum+=arr[i];
    }
    v+=arr[city]*temp;


    for(int i = 1;i<=capital;i++)
    {
        cin>>cap;
         unsigned long long tm=0;
        if(cap==1)
        {
            tm= (sum-arr[2]-arr[capital]-arr[cap])*arr[cap];
            cout<<tm/arr[cap]<<endl<<endl;
        }
        else
        {
            tm=(sum-arr[cap-1]-arr[cap+1]-arr[cap])*arr[cap];
        }

        v+=tm;cout<<tm<<endl;
    }
    cout<<v<<endl;

    return 0;
}
