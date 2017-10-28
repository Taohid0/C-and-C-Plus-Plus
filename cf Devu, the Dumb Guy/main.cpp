#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long arr[100005],n,x;
    cin>>n>>x;
    for(int i = 0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);
    long long ans=0;
    x++;
    for(int i = 0;i<n;i++)
    {
        x--;
        if(x<1)x=1;
        ans+=arr[i]*x;

    }
    cout<<ans<<endl;
    return 0;
}
