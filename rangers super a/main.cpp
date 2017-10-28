#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10000],a,b,c;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c1=0,c2 = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            c1++;
            a=1+i;
        }
    }
    for(int i = 0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            c2++;;
            b = 1+i;
        }
    }
    if(c1==1)cout<<a<<endl;
    else
        cout<<b<<endl;
    return 0;
}
