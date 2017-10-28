#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,counter = 0;
    map<string,string>mp;
    cin>>n;
    string old,nw;
    for(int i = 0;i<n;i++)
    {
        cin>>old>>nw;
        if(!mp[nw])
        {
            counter++;
            mn[nw] = old;
        }
    }
    return 0;
}
