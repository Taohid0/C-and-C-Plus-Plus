#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10000],n,k,counter = 0;
    cin>>n>>k;
    for(int i = 1;i<=n;i++)
        cin>>arr[i];
    for(int i= 1;i<=n;i++)
    {
        if(arr[i]>=arr[k] and arr[i]>0)counter++;
    }
    cout<<counter<<endl;
    return 0;
}
