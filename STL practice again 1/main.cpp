#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int>v(11);

    for(auto i = 1;i<=10;i++)
    {
        v[i]=(i*i);
    }

    reverse(v.begin(),v.begin()+5);

    for(int i = 0;i<=10;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
