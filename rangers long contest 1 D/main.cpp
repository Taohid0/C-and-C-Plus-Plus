#include <bits/stdc++.h>

using namespace std;

int main()
{
    int value, n,arr[100005],a;
    long long result = 0;
    cin>>n>>a;
    for(int i = 0;i<n;i++)
    {
        cin>>value;
        arr[i]  = abs(a-value);
    }
    sort(arr,arr+n);
    for(int i = 0;i<n-1;i++)
    {
        result+=arr[i];
    }
    cout<<result<<endl;
    return 0;
}
