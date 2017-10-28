#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,t,c,mx=0,counter=0,value,arr[100005*2];
    cin>>n>>t>>c;

    for(int i = 0;i<n;i++)
    {
        cin>>value;
        if(value<=t)counter++;
        else counter = 0;
        arr[i] =counter;
    }
    for(int i = 0;i<n;i++)
    {
        if(arr[i]>=c)mx++;
    }
    cout<<mx<<endl;
    return 0;
}
