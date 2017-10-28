#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,inpt;
    vector<int>v;
    cin>>n;
    for(int i=1;i<=n*n;i++)
    {
        cin>>inpt;
        v.push_back(inpt);
    }
    sort(v.begin(),v.end());

    for(int i=0;i<n*n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
