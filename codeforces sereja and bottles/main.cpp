#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,arr[10001];
    memset(arr,0,sizeof(arr));
    set<int>v;
    int counter = 0;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>a>>b;
        //v.insert(a);
        v.insert(b);
        if(a!=b)
        {
            arr[b]=1;
        }
    }

    return 0;
}
