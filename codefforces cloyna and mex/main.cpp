#include <bits/stdc++.h>

using namespace std;
long int arr[1000006];
int main()
{
    long int mx=-1;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
        mx = max(mx,arr[i]);
    }
    sort(arr,arr+n);
    int ans=-1;
    for(int i = 0;i<n;i++)
    {
        if(arr[i+1]-arr[i]>1)
        {
            ans = arr[i]+1;
            break;
        }
    }
    if(ans==-1)
    {
        cout<<mx+1;
    }
    else
        cout<<ans<<endl;
    return 0;
}
