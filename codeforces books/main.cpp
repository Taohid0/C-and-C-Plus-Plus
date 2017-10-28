#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long arr[100005],n,value,total_time;
    cin>>n>>total_time;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    value = 0;
    int time = 0;
    for(int i = 0;i<n;i++)
    {
       if(arr[i]+time<=total_time)
       {
           time+=arr[i];
           value++;
       }
       else
        break;
    }
    cout<<value<<endl;
    return 0;
}
