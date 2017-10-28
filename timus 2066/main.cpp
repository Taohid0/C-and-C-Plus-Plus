#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;
    int r,a,b,c;
    cin>>a>>b>>c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    if(v[1]==0 || v[2]==0 || v[1]==1 || v[2]==1)
    {
        r = v[0]-(v[1]+v[2]);
    }

    else
        r =v[0]-(v[1]*v[2]);
    cout<<r;
    return 0;
}
