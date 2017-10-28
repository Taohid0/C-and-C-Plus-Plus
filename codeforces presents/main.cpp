#include <bits/stdc++.h>

using namespace std;

int main()
{
    int value,n,arr[100005];
    cin>>n;
    for(int i= 1;i<=n;i++)
    {
        cin>>value;
        arr[value] = i;
    }
    for(int i = 1;i<=n;i++)
    {
        cout<<arr[i]<< " ";
    }
    return 0;
}
