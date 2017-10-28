#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[3*100005],n;
    long long total = 0;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
        total+=arr[i];
    }
    sort(arr,arr+n);
    long long sum = total;

    for(int i = 0;i<n-1;i++)
    {
        total-=arr[i];
        sum+=total+arr[i];

    }
    cout<<sum<<endl;

    return 0;
}
