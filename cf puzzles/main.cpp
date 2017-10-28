#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,mnn = INT_MAX,arr[100];
    cin>>n>>m;
    for(int i = 0;i<m;i++)
        cin>>arr[i];
    sort(arr,arr+m);
    for(int i = 0;i<=m-n;i++)
    {
        mnn =min(mnn,arr[i+n-1]-arr[i]);
    }
    cout<<mnn<<endl;

    return 0;
}
